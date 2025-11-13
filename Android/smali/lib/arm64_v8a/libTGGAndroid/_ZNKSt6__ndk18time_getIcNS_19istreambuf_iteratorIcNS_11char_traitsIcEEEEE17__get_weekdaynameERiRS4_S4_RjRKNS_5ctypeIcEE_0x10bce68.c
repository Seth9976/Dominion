// 函数: _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_weekdaynameERiRS4_S4_RjRKNS_5ctypeIcEE
// 地址: 0x10bce68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0_1 = (**(arg1 + 0x10))()
int64_t* entry_x5
char* result = sub_10b0e88(arg3, arg4, x0_1, &x0_1[0x150], entry_x5, arg5, 0)
int64_t x8_2 = result - x0_1

if (x8_2 s<= 0x14f)
    int64_t x8_4 = (x8_2 s>> 3) * -0x5555555555555555
    int64_t x9_1 = (muls.dp.q(x8_4, 0x4924924924924925) u>> 0x40).q
    *arg2 = x8_4.d - ((x9_1 u>> 1).d + (x9_1 u>> 0x3f).d) * 7

return result
