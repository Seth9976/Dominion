// 函数: sub_fe943c
// 地址: 0xfe943c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*arg2)

if (x8 == 0)
    return 

void* x21_1 = &arg2[1]

while (true)
    uint64_t x8_6 = zx.q((x8 & 0xff) - 0x20)
    int16_t* x1
    int64_t x2
    
    if (x8_6.d u<= 0x14)
        switch (x8_6)
            case 0
                goto label_fe9498
            case 0x11
                int64_t x8_7 = sx.q(arg3[3].d)
                
                if ((x8_7.d & 0x80000000) != 0)
                    arg3[3].d = x8_7.d + 8
                
                int32_t* x8_8
                
                if ((x8_7.d & 0x80000000) == 0 || x8_7.d s> 0xfffffff8)
                    x8_8 = *arg3
                    *arg3 = &x8_8[2]
                else
                    x8_8 = arg3[1] + x8_7
                
                char var_24
                x1 = &var_24
                x2 = 1
                var_24 = (*x8_8).b
                goto label_fe9494
            case 0x12
                int64_t x8_9 = sx.q(arg3[3].d)
                
                if ((x8_9.d & 0x80000000) != 0)
                    arg3[3].d = x8_9.d + 8
                
                int32_t* x8_10
                
                if ((x8_9.d & 0x80000000) == 0 || x8_9.d s> 0xfffffff8)
                    x8_10 = *arg3
                    *arg3 = &x8_10[2]
                else
                    x8_10 = arg3[1] + x8_9
                
                int16_t var_28
                x1 = &var_28
                x2 = 2
                var_28 = (*x8_10).w
                goto label_fe9494
            case 0x14
                int64_t x8_1 = sx.q(arg3[3].d)
                
                if ((x8_1.d & 0x80000000) != 0)
                    arg3[3].d = x8_1.d + 8
                
                int32_t* x8_2
                
                if ((x8_1.d & 0x80000000) == 0 || x8_1.d s> 0xfffffff8)
                    x8_2 = *arg3
                    *arg3 = &x8_2[2]
                else
                    x8_2 = arg3[1] + x8_1
                
                int32_t var_34
                x1 = &var_34
                x2 = 4
                var_34 = *x8_2
            label_fe9494:
                (*arg1)(arg1[1], x1, x2)
            label_fe9498:
                x8 = zx.d(*x21_1)
                x21_1 += 1
                
                if (x8 == 0)
                    break
                
                continue
    int64_t* x0_1
    int32_t x1_1
    int32_t x2_1
    int32_t x3
    char* x4
    x0_1, x1_1, x2_1, x3, x4 = __assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_write.h", 0x144, 
        "void stbiw__writefv(stbi__write_context *, const char *, va_list)", &data_75c628)
    return sub_fe9598(x0_1, x1_1, x2_1, x3, x4) __tailcall
