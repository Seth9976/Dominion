// 函数: _Z12DomAnimStart8AnimTypeRK10AnimSource8DomWhere9AnimFlags
// 地址: 0xbaa198
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0 || (arg4 & 0x100) != 0)
    return 

if (arg1.d u> 8)
label_baa1ec:
    pthread_kill(pthread_self(), 6)
    int64_t x0_3
    AnimSource* x1_2
    int64_t x2_1
    int64_t x3_1
    int64_t x4_1
    x0_3, x1_2, x2_1, x3_1, x4_1 = XNoReturn()
    return DomAnimMoment(x0_3, x1_2, x2_1, x3_1, x4_1) __tailcall

if ((1 << arg1.d & 0x1ee) != 0)
    return 

if (arg1.d != 4)
    goto label_baa1ec

if ((arg4 & 8) != 0)
    return DomSoundCardReaction(zx.q(*(arg2 + 8)), zx.q(*(arg2 + 0xc))) __tailcall
