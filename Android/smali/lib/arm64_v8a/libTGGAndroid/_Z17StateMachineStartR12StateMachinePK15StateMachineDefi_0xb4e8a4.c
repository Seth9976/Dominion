// 函数: _Z17StateMachineStartR12StateMachinePK15StateMachineDefi
// 地址: 0xb4e8a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg3
*arg1 = arg2

if (arg3 == 0xffffffff)
    i = *arg2

if (arg3 != 0xffffffff || i != 0xffffffff)
    do
        int64_t x0 = Now()
        int64_t x22_1 = *arg1
        *(arg1 + 0x10) = x0
        *(arg1 + 8) = i
        void* x23_1 = x22_1 + muls.dp.d(i, 0x18)
        (*(x23_1 + 0x10))()
        
        if (*(x23_1 + 8) != 0)
            return 1
        
        i = *(x22_1 + sx.q(i) * 0x18 + 4)
    while (i != 0xffffffff)

*arg1 = 0
return 0
