#include <stdio.h>
#include <assert.h>

void Generate_FOLD(int RecursionCount, int SafetyBuffer)
{
    assert(RecursionCount >= 2);
    assert(SafetyBuffer >= RecursionCount);
    
    printf("#define FOLD(...) FOLD_(NUM_ARGS(__VA_ARGS__), FIRST_ARG(__VA_ARGS__), REST_ARG(__VA_ARGS__))\n");
    printf("#define FOLD_(N, M, ...) FOLD__(N, M, __VA_ARGS__)\n");
    printf("#define FOLD__(N, M, ...) FOLD_##N(M, FIRST_ARG(__VA_ARGS__), REST_ARG(__VA_ARGS__))\n");
    
    printf("#define FOLD_1(F, ...)\n");
    printf("#define FOLD_2(F, ...) FIRST_ARG(__VA_ARGS__)\n");
    printf("#define FOLD_3_(F, R) EXPAND(F R)\n");
    printf("#define FOLD_3(F, R, L) FOLD_3_(F, (R, L))\n");
    
    for(int i = 4; i <= RecursionCount + 1; ++i)
    {
        printf("#define FOLD_%i_(F, R, ...) FOLD_%i(F, F R, __VA_ARGS__)\n",i,i-1);
        printf("#define FOLD_%i(F, R, ...) FOLD_%i_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))\n",i,i);
    }
    
    for(int i = RecursionCount + 2; i <= SafetyBuffer + 1; ++i)
    {
        printf("#define FOLD_%i(...) -----\"Over Max (%i) arguments to FOLD vararg passed (%i)\"-----\n",i,RecursionCount,i-1);
    }
}

void Generate_NUM_ARG(int Count)
{
    assert(Count > 0);
    
    printf("#define NUM_ARGS_(");
    for(int i = Count; i > 0; --i)
    {
        printf("a%i,",i);
    }
    printf("N,...) N\n");
    
    printf("#define NUM_ARGS(...) EXPAND(NUM_ARGS_(__VA_ARGS__");
    for(int i = Count; i > 0; --i)
    {
        printf(",%i",i);
    }
    printf("))\n");
}


int main()
{
    printf("/* General Utility Macros */\n");
    printf("#define EXPAND(a) a\n");
    printf("#define FIRST_ARG(a, ...) a\n");
    printf("#define REST_ARG(a, ...) __VA_ARGS__\n");
    Generate_NUM_ARG(73);
    
    printf("\n/* FOLD Macros */\n");
    printf("#define FOLD_VERSION 1\n");
    Generate_FOLD(32, 51);
    
    return 0;
}

