// 函数: _Z10ExecChoose9PlayerWhoPK9ChoiceDefiiiRK11DomChoiceUI11AbilityFlag
// 地址: 0xadd14c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x26 = arg7
int32_t x22 = arg5
int32_t x24 = arg1
int32_t* result
CardID* x1
int128_t v0
int128_t v1
int128_t v2
result, x1, v0, v1, v2 = DomGetContext()
int32_t* result_1 = result
int32_t x24_1

if (x24 == 0xffffffff)
    x24_1 = result[6]
else
    x24_1 = x24

if ((x26 & 0x200) == 0)
    int32_t x0 = ThisCard(false, x1)
    int64_t x27_1 = *(result_1 + 0x40)
    void* x0_1 = DomGetContext()
    result, v0, v1, v2 = HasOngoing(*(x0_1 + 8), zx.q(*(x0_1 + 0x18)), 0x1a, x0, x27_1)
    
    if ((x26 & 0x80) == 0 && (result.d & 1) != 0)
        if (x22 s>= arg3)
            x22 = arg3
        else
            x22 += 1

if (x22 != 0)
    int64_t x9_1 = *(arg6 + 0x30)
    int128_t var_90_1 = *(arg6 + 0x10)
    int128_t var_80_1 = *(arg6 + 0x20)
    int128_t var_a0 = *arg6
    var_80_1:8.q = *(result_1 + 0x40)
    int64_t var_70_1 = x9_1
    CardID var_d0
    
    if (arg3 s>= 1)
        uint64_t x8_3 = zx.q(arg3)
        int64_t i_5
        
        if (arg3 != 1)
            i_5 = x8_3 & 0xfffffffe
            void* __offset(ChoiceDef, 0x70) x10_1 = arg2 + 0x70
            void var_cc
            void* x11_1 = &var_cc
            int64_t i_4 = i_5
            int64_t i
            
            do
                int32_t x13_1 = *(x10_1 - 0x40)
                int32_t x14_1 = *x10_1
                x10_1 += 0x80
                i = i_4
                i_4 -= 2
                *(x11_1 - 4) = x13_1
                *x11_1 = x14_1
                x11_1 += 8
            while (i != 2)
            
            if (i_5 != x8_3)
                goto label_add254
        else
            i_5 = 0
        label_add254:
            void* x10_2 = &var_d0 + (i_5 << 2)
            void* x11_3 = arg2 + (i_5 << 6) + 0x30
            int64_t i_3 = x8_3 - i_5
            int64_t i_1
            
            do
                int32_t x9_2 = *x11_3
                x11_3 += 0x40
                i_1 = i_3
                i_3 -= 1
                *x10_2 = x9_2
                x10_2 += 4
            while (i_1 != 1)
    
    int32_t j_2 = arg3
    int128_t var_120
    
    if (arg4 != arg3)
        var_120.d = *result_1
        var_120:4.d = result_1[7]
        int64_t var_130
        var_130.d = 0x30
        result = QueueChoiceOptions(*(result_1 + 8), &var_120, zx.q(x24_1), &var_d0, zx.q(arg3), 
            zx.q(x22), zx.q(arg4), &var_a0)
        j_2 = result.d
    
    if (arg4 == arg3 || result.d != 0)
        int32_t var_d4 = 0x17
        DomGame* x0_4 = *(result_1 + 8)
        uint64_t x1_3 = zx.q(result_1[6])
        __builtin_memset(&var_120, 0, 0x48)
        int64_t var_130_1 = 0
        result = TriggerEvents(x0_4, x1_3, &var_d4, 1, &var_120, 0, &var_d0, zx.q(j_2))
        
        if (arg3 s>= 1 && j_2 s>= 1)
            int64_t i_2 = 0
            
            do
                void* x8_5 = arg2 + (i_2 << 6)
                CardID* x26_1 = &var_d0
                uint64_t j_1 = zx.q(j_2)
                uint64_t j
                
                do
                    int32_t x8_6 = *x26_1
                    
                    if (*(x8_5 + 0x30) == x8_6 || *(x8_5 + 0x34) == x8_6)
                        int64_t* x0_5 = *(x8_5 + 0x20)
                        
                        if (x0_5 == 0)
                            sub_a58ab4()
                            noreturn
                        
                        result = (*(*x0_5 + 0x30))()
                    
                    j = j_1
                    j_1 -= 1
                    x26_1 += 4
                while (j != 1)
                i_2 += 1
            while (i_2 != zx.q(arg3))

return result
