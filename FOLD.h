/* General Utility Macros */
#define EXPAND(a) a
#define FIRST_ARG(a, ...) a
#define REST_ARG(a, ...) __VA_ARGS__
#define NUM_ARGS_(a73,a72,a71,a70,a69,a68,a67,a66,a65,a64,a63,a62,a61,a60,a59,a58,a57,a56,a55,a54,a53,a52,a51,a50,a49,a48,a47,a46,a45,a44,a43,a42,a41,a40,a39,a38,a37,a36,a35,a34,a33,a32,a31,a30,a29,a28,a27,a26,a25,a24,a23,a22,a21,a20,a19,a18,a17,a16,a15,a14,a13,a12,a11,a10,a9,a8,a7,a6,a5,a4,a3,a2,a1,N,...) N
#define NUM_ARGS(...) EXPAND(NUM_ARGS_(__VA_ARGS__,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1))

/* FOLD Macros */
#define FOLD_VERSION 1
#define FOLD(...) FOLD_(NUM_ARGS(__VA_ARGS__), FIRST_ARG(__VA_ARGS__), REST_ARG(__VA_ARGS__))
#define FOLD_(N, M, ...) FOLD__(N, M, __VA_ARGS__)
#define FOLD__(N, M, ...) FOLD_##N(M, FIRST_ARG(__VA_ARGS__), REST_ARG(__VA_ARGS__))
#define FOLD_1(F, ...)
#define FOLD_2(F, ...) FIRST_ARG(__VA_ARGS__)
#define FOLD_3_(F, R) EXPAND(F R)
#define FOLD_3(F, R, L) FOLD_3_(F, (R, L))
#define FOLD_4_(F, R, ...) FOLD_3(F, F R, __VA_ARGS__)
#define FOLD_4(F, R, ...) FOLD_4_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_5_(F, R, ...) FOLD_4(F, F R, __VA_ARGS__)
#define FOLD_5(F, R, ...) FOLD_5_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_6_(F, R, ...) FOLD_5(F, F R, __VA_ARGS__)
#define FOLD_6(F, R, ...) FOLD_6_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_7_(F, R, ...) FOLD_6(F, F R, __VA_ARGS__)
#define FOLD_7(F, R, ...) FOLD_7_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_8_(F, R, ...) FOLD_7(F, F R, __VA_ARGS__)
#define FOLD_8(F, R, ...) FOLD_8_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_9_(F, R, ...) FOLD_8(F, F R, __VA_ARGS__)
#define FOLD_9(F, R, ...) FOLD_9_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_10_(F, R, ...) FOLD_9(F, F R, __VA_ARGS__)
#define FOLD_10(F, R, ...) FOLD_10_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_11_(F, R, ...) FOLD_10(F, F R, __VA_ARGS__)
#define FOLD_11(F, R, ...) FOLD_11_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_12_(F, R, ...) FOLD_11(F, F R, __VA_ARGS__)
#define FOLD_12(F, R, ...) FOLD_12_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_13_(F, R, ...) FOLD_12(F, F R, __VA_ARGS__)
#define FOLD_13(F, R, ...) FOLD_13_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_14_(F, R, ...) FOLD_13(F, F R, __VA_ARGS__)
#define FOLD_14(F, R, ...) FOLD_14_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_15_(F, R, ...) FOLD_14(F, F R, __VA_ARGS__)
#define FOLD_15(F, R, ...) FOLD_15_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_16_(F, R, ...) FOLD_15(F, F R, __VA_ARGS__)
#define FOLD_16(F, R, ...) FOLD_16_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_17_(F, R, ...) FOLD_16(F, F R, __VA_ARGS__)
#define FOLD_17(F, R, ...) FOLD_17_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_18_(F, R, ...) FOLD_17(F, F R, __VA_ARGS__)
#define FOLD_18(F, R, ...) FOLD_18_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_19_(F, R, ...) FOLD_18(F, F R, __VA_ARGS__)
#define FOLD_19(F, R, ...) FOLD_19_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_20_(F, R, ...) FOLD_19(F, F R, __VA_ARGS__)
#define FOLD_20(F, R, ...) FOLD_20_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_21_(F, R, ...) FOLD_20(F, F R, __VA_ARGS__)
#define FOLD_21(F, R, ...) FOLD_21_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_22_(F, R, ...) FOLD_21(F, F R, __VA_ARGS__)
#define FOLD_22(F, R, ...) FOLD_22_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_23_(F, R, ...) FOLD_22(F, F R, __VA_ARGS__)
#define FOLD_23(F, R, ...) FOLD_23_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_24_(F, R, ...) FOLD_23(F, F R, __VA_ARGS__)
#define FOLD_24(F, R, ...) FOLD_24_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_25_(F, R, ...) FOLD_24(F, F R, __VA_ARGS__)
#define FOLD_25(F, R, ...) FOLD_25_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_26_(F, R, ...) FOLD_25(F, F R, __VA_ARGS__)
#define FOLD_26(F, R, ...) FOLD_26_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_27_(F, R, ...) FOLD_26(F, F R, __VA_ARGS__)
#define FOLD_27(F, R, ...) FOLD_27_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_28_(F, R, ...) FOLD_27(F, F R, __VA_ARGS__)
#define FOLD_28(F, R, ...) FOLD_28_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_29_(F, R, ...) FOLD_28(F, F R, __VA_ARGS__)
#define FOLD_29(F, R, ...) FOLD_29_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_30_(F, R, ...) FOLD_29(F, F R, __VA_ARGS__)
#define FOLD_30(F, R, ...) FOLD_30_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_31_(F, R, ...) FOLD_30(F, F R, __VA_ARGS__)
#define FOLD_31(F, R, ...) FOLD_31_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_32_(F, R, ...) FOLD_31(F, F R, __VA_ARGS__)
#define FOLD_32(F, R, ...) FOLD_32_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_33_(F, R, ...) FOLD_32(F, F R, __VA_ARGS__)
#define FOLD_33(F, R, ...) FOLD_33_(F, (R, FIRST_ARG(__VA_ARGS__)), REST_ARG(__VA_ARGS__))
#define FOLD_34(...) -----"Over Max (32) arguments to FOLD vararg passed (33)"-----
#define FOLD_35(...) -----"Over Max (32) arguments to FOLD vararg passed (34)"-----
#define FOLD_36(...) -----"Over Max (32) arguments to FOLD vararg passed (35)"-----
#define FOLD_37(...) -----"Over Max (32) arguments to FOLD vararg passed (36)"-----
#define FOLD_38(...) -----"Over Max (32) arguments to FOLD vararg passed (37)"-----
#define FOLD_39(...) -----"Over Max (32) arguments to FOLD vararg passed (38)"-----
#define FOLD_40(...) -----"Over Max (32) arguments to FOLD vararg passed (39)"-----
#define FOLD_41(...) -----"Over Max (32) arguments to FOLD vararg passed (40)"-----
#define FOLD_42(...) -----"Over Max (32) arguments to FOLD vararg passed (41)"-----
#define FOLD_43(...) -----"Over Max (32) arguments to FOLD vararg passed (42)"-----
#define FOLD_44(...) -----"Over Max (32) arguments to FOLD vararg passed (43)"-----
#define FOLD_45(...) -----"Over Max (32) arguments to FOLD vararg passed (44)"-----
#define FOLD_46(...) -----"Over Max (32) arguments to FOLD vararg passed (45)"-----
#define FOLD_47(...) -----"Over Max (32) arguments to FOLD vararg passed (46)"-----
#define FOLD_48(...) -----"Over Max (32) arguments to FOLD vararg passed (47)"-----
#define FOLD_49(...) -----"Over Max (32) arguments to FOLD vararg passed (48)"-----
#define FOLD_50(...) -----"Over Max (32) arguments to FOLD vararg passed (49)"-----
#define FOLD_51(...) -----"Over Max (32) arguments to FOLD vararg passed (50)"-----
#define FOLD_52(...) -----"Over Max (32) arguments to FOLD vararg passed (51)"-----
