// 函数: sub_107ab78
// 地址: 0x107ab78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t x22

if (arg1[0x10].d != 1)
    x22 = 0xffffff7d
else
    arg1[0x10].d = 2
    
    if (arg1[1].d == 0)
        x22 = 0
        arg1[0x10].d = 3
    else
        int64_t x20_1 = *arg1[0xa]
        int64_t var_50 = -1
        int32_t x24_1 = (arg1[0x44]).d
        int32_t var_54 = x24_1
        int64_t x0_1 = sub_107e724(arg1, arg1[0xd])
        int64_t x8_4 = arg1[0x73]
        
        if (x8_4 == 0 || arg1[0x75] == 0)
            arg1[2] = -1
            arg1[3] = -1
        label_107acc8:
            x22 = 0xffffff7d
            *arg1 = 0
            ov_clear(arg1)
        else
            x8_4(*arg1, 0, 2)
            int64_t x0_4 = arg1[0x75](*arg1)
            arg1[2] = x0_4
            arg1[3] = x0_4
            
            if (x0_4 == -1)
                goto label_107acc8
            
            void* x8_6 = arg1[0xb]
            int64_t x0_6 = sub_107e870(arg1, x0_4, x8_6 + 0x10, *(x8_6 + 8), &var_54, &var_50)
            x22 = x0_6
            
            if ((x0_6 & 0xffffffff80000000) != 0)
                goto label_107acb4
            
            void* x8_7 = arg1[0xb]
            
            if ((sub_107ea6c(arg1, 0, x20_1, x22, var_50, zx.q(var_54), x8_7 + 0x10, *(x8_7 + 8), 0)
                    & 0x80000000) != 0)
                x22 = 0xffffff80
                *arg1 = 0
                ov_clear(arg1)
            else
                *arg1[9] = 0
                *arg1[0xb] = sx.q(x24_1)
                *arg1[0xa] = x20_1
                int64_t* x8_11 = arg1[0xc]
                int64_t x9_4 = x8_11[1] - x0_1
                *x8_11 = x0_1
                x8_11[1] = x9_4 & not.q(x9_4 s>> 0x3f)
                x22 = zx.q(ov_raw_seek(arg1, x20_1))
            label_107acb4:
                
                if (x22.d != 0)
                    *arg1 = 0
                    ov_clear(arg1)

if (*(x23 + 0x28) == x8)
    return zx.q(x22.d)

__stack_chk_fail()
noreturn
