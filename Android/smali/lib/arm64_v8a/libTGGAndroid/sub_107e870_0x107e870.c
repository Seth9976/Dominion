// 函数: sub_107e870
// 地址: 0x107e870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t x27 = -1
int64_t x19 = -1
int64_t result = -1
int64_t x28 = arg2
uint64_t x8_9

while (true)
label_107e8dc:
    int64_t x0 = *arg1
    
    if (x0 == 0)
        x8_9 = x8
        result = -0x81
        break
    
    x28 = (x28 - 0x10000) & not.q((x28 - 0x10000) s>> 0x3f)
    int64_t x8_3 = x28
    
    if (arg1[2] != x28)
        int64_t x8_4 = arg1[0x73]
        int32_t x0_1
        
        if (x8_4 != 0)
            x0_1 = x8_4(x0, x28, 0)
        
        if (x8_4 == 0 || x0_1 == 0xffffffff)
        label_107ea20:
            x8_9 = x8
            result = -0x80
            break
        
        arg1[2] = x28
        ogg_sync_reset(&arg1[4])
        x8_3 = arg1[2]
    
    int64_t result_1 = -1
    
    if (x8_3 s< arg2)
        while (true)
        label_107e95c:
            int64_t result_3 = result_1
            void var_88
            int64_t result_2 = sub_107bd58(arg1, &var_88, arg2 - x8_3)
            result_1 = result_2
            
            if (result_2 == -0x80)
                goto label_107ea20
            
            if ((result_1 & 0xffffffff80000000) != 0)
                result_1 = result_3
                
                if (result_1 == -1)
                    goto label_107e8dc
                
                goto label_107ea00
            
            int32_t x0_5 = ogg_page_serialno(&var_88)
            x27 = ogg_page_granulepos(&var_88)
            
            if (x0_5 == *arg5)
                result = result_1
                *arg6 = x27
            
            int64_t* x9_3 = arg3
            x19 = sx.q(x0_5)
            int32_t i = arg4
            
            if ((((arg3 == 0 ? 1 : 0) | (arg4 == 0 ? 1 : 0)) & 1) != 0)
                x8_3 = arg1[2]
                result = -1
                
                if (x8_3 s>= arg2)
                    break
            else
                do
                    if (*x9_3 == x19)
                        x8_3 = arg1[2]
                        
                        if (x8_3 s< arg2)
                            goto label_107e95c
                        
                        goto label_107e934
                    
                    i -= 1
                    x9_3 = &x9_3[1]
                while (i != 0)
                
                x8_3 = arg1[2]
                result = -1
                
                if (x8_3 s>= arg2)
                    break
    
label_107e934:
    
    if (result_1 != -1)
    label_107ea00:
        x8_9 = x8
        
        if ((result & 0xffffffff80000000) != 0)
            result = result_1
            *arg5 = x19.d
            *arg6 = x27
        
        break

if (*(x8_9 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
