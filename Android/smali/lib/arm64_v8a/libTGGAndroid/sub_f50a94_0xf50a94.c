// 函数: sub_f50a94
// 地址: 0xf50a94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x24 + 0x28)
int64_t x8_2 = ((arg2 - arg1) s>> 3) * -0x71c71c71c71c71c7
int128_t var_a0
int32_t x8_3

if (x8_2 u<= 5)
    x8_3 = 1
    
    switch (x8_2)
        case 0, 1
        label_f50e3c:
            
            if (*(x24 + 0x28) == x9)
                return zx.q(x8_3) & 1
        case 2
            int32_t x0_1
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            x0_1, v0_1, v1_1, v2_1 = sub_f4f6d4(arg3, arg2 - 0x48, arg1)
            
            if ((x0_1 & 1) == 0)
                goto label_f50e00
            
            v2_1 = *(arg1 + 0x10)
            var_a0 = *arg1
            int128_t var_90_1 = v2_1
            char x8_4 = (*(arg1 + 0x40)).b
            int128_t var_80_1 = *(arg1 + 0x20)
            int128_t var_70_1 = *(arg1 + 0x30)
            v2_1 = *(arg2 - 0x28)
            v0_1 = *(arg2 - 0x18)
            v1_1 = *(arg2 - 0x38)
            *(arg1 + 0x40) = *(arg2 - 8)
            *(arg1 + 0x20) = v2_1
            *(arg1 + 0x30) = v0_1
            *(arg1 + 0x10) = v1_1
            *arg1 = *(arg2 - 0x48)
            *(arg2 - 8) = x8_4
            *(arg2 - 0x28) = var_80_1
            *(arg2 - 0x18) = var_70_1
            *(arg2 - 0x48) = var_a0
            *(arg2 - 0x38) = var_90_1
            
            if (*(x24 + 0x28) == x9)
                return 1
        case 3
            sub_f504b8(arg1, arg1 + 0x48, arg2 - 0x48, arg3)
        label_f50e00:
            
            if (*(x24 + 0x28) == x9)
                return 1
        case 4
            sub_f504b8(arg1, arg1 + 0x48, arg1 + 0x90, arg3)
            int32_t x0_11
            int128_t v0_3
            int128_t v1_3
            int128_t v2_3
            x0_11, v0_3, v1_3, v2_3 = sub_f4f6d4(arg3, arg2 - 0x48, arg1 + 0x90)
            
            if ((x0_11 & 1) == 0)
                goto label_f50e00
            
            v2_3 = *(arg1 + 0xa0)
            var_a0 = *(arg1 + 0x90)
            int128_t var_90_3 = v2_3
            char x8_12 = (*(arg1 + 0xd0)).b
            int128_t var_80_3 = *(arg1 + 0xb0)
            int128_t var_70_3 = *(arg1 + 0xc0)
            v2_3 = *(arg2 - 0x28)
            v0_3 = *(arg2 - 0x18)
            v1_3 = *(arg2 - 0x38)
            *(arg1 + 0xd0) = *(arg2 - 8)
            *(arg1 + 0xb0) = v2_3
            *(arg1 + 0xc0) = v0_3
            *(arg1 + 0xa0) = v1_3
            *(arg1 + 0x90) = *(arg2 - 0x48)
            *(arg2 - 8) = x8_12
            *(arg2 - 0x28) = var_80_3
            *(arg2 - 0x18) = var_70_3
            *(arg2 - 0x48) = var_a0
            *(arg2 - 0x38) = var_90_3
            int32_t x0_13
            int128_t v0_4
            int128_t v1_4
            int128_t v2_4
            x0_13, v0_4, v1_4, v2_4 = sub_f4f6d4(arg3, arg1 + 0x90, arg1 + 0x48)
            
            if ((x0_13 & 1) == 0)
                goto label_f50e00
            
            v2_4 = *(arg1 + 0x58)
            var_a0 = *(arg1 + 0x48)
            int128_t var_90_4 = v2_4
            char x8_15 = (*(arg1 + 0x88)).b
            int128_t var_80_4 = *(arg1 + 0x68)
            int128_t var_70_4 = *(arg1 + 0x78)
            v2_4 = *(arg1 + 0xb0)
            v0_4 = *(arg1 + 0xc0)
            *(arg1 + 0x88) = *(arg1 + 0xd0)
            *(arg1 + 0x68) = v2_4
            *(arg1 + 0x78) = v0_4
            v1_4 = *(arg1 + 0xa0)
            *(arg1 + 0x48) = *(arg1 + 0x90)
            *(arg1 + 0x58) = v1_4
            *(arg1 + 0xd0) = x8_15
            *(arg1 + 0xb0) = var_80_4
            *(arg1 + 0xc0) = var_70_4
            *(arg1 + 0x90) = var_a0
            *(arg1 + 0xa0) = var_90_4
            int32_t x0_15
            int128_t v0_5
            int128_t v1_5
            int128_t v2_5
            x0_15, v0_5, v1_5, v2_5 = sub_f4f6d4(arg3, arg1 + 0x48, arg1)
            
            if ((x0_15 & 1) == 0)
                goto label_f50e00
            
            v2_5 = *(arg1 + 0x10)
            var_a0 = *arg1
            int128_t var_90_5 = v2_5
            char x8_18 = (*(arg1 + 0x40)).b
            int128_t var_80_5 = *(arg1 + 0x20)
            int128_t var_70_5 = *(arg1 + 0x30)
            v2_5 = *(arg1 + 0x68)
            v0_5 = *(arg1 + 0x78)
            *(arg1 + 0x40) = *(arg1 + 0x88)
            *(arg1 + 0x20) = v2_5
            *(arg1 + 0x30) = v0_5
            v1_5 = *(arg1 + 0x58)
            *arg1 = *(arg1 + 0x48)
            *(arg1 + 0x10) = v1_5
            *(arg1 + 0x88) = x8_18
            *(arg1 + 0x68) = var_80_5
            *(arg1 + 0x78) = var_70_5
            *(arg1 + 0x48) = var_a0
            *(arg1 + 0x58) = var_90_5
            
            if (*(x24 + 0x28) == x9)
                return 1
        case 5
            sub_f50700(arg1, arg1 + 0x48, arg1 + 0x90, arg1 + 0xd8, arg2 - 0x48, arg3)
            goto label_f50e00
    
    __stack_chk_fail()
    noreturn

void* x22_1 = arg1 + 0x90
uint32_t x9_2 = sub_f504b8(arg1, arg1 + 0x48, x22_1, arg3)
void* x8_7 = arg1 + 0xd8
int32_t x8_21

if (x8_7 == arg2)
label_f50e18:
    x8_21 = 1
else
    int64_t x23_1 = 0
    int32_t x25_1 = 0
    
    while (true)
        void* x2_3 = x22_1
        x22_1 = x8_7
        int32_t x0_5
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        x0_5, x9_2, v0_2, v1_2, v2_2 = sub_f4f6d4(arg3, x8_7, x2_3)
        
        if ((x0_5 & 1) != 0)
            v2_2 = *(x22_1 + 0x10)
            int64_t x26_1 = x23_1
            var_a0 = *x22_1
            int128_t var_90_2 = v2_2
            char x8_9 = (*(x22_1 + 0x40)).b
            int128_t var_80_2 = *(x22_1 + 0x20)
            int128_t var_70_2 = *(x22_1 + 0x30)
            void* x8_8
            
            while (true)
                void* x8_10 = arg1 + x26_1
                v2_2 = *(x8_10 + 0xb0)
                *(x8_10 + 0x108) = *(x8_10 + 0xc0)
                char x10_3 = *(x8_10 + 0xd0)
                *(x8_10 + 0xf8) = v2_2
                *(x8_10 + 0x118) = x10_3
                v0_2 = *(x8_10 + 0x90)
                *(x8_10 + 0xe8) = *(x8_10 + 0xa0)
                *(x8_10 + 0xd8) = v0_2
                
                if (x26_1 == -0x90)
                    x8_8 = arg1
                    break
                
                int32_t x0_7
                x0_7, v0_2, v1_2, v2_2 = sub_f4f6d4(arg3, &var_a0, x8_10 + 0x48)
                x26_1 -= 0x48
                
                if ((x0_7 & 1) == 0)
                    x8_8 = arg1 + x26_1 + 0xd8
                    break
            
            x25_1 += 1
            *x8_8 = var_a0
            *(x8_8 + 0x10) = var_90_2
            x9_2 = zx.d(x8_9)
            *(x8_8 + 0x20) = var_80_2
            *(x8_8 + 0x30) = var_70_2
            *(x8_8 + 0x40) = x9_2.b
            
            if (x25_1 == 8)
                x8_21 = 0
                x9_2 = x22_1 + 0x48 == arg2 ? 1 : 0
                break
        
        x8_7 = x22_1 + 0x48
        x23_1 += 0x48
        
        if (x8_7 == arg2)
            goto label_f50e18

x8_3 = x8_21 | x9_2
goto label_f50e3c
