// 函数: sub_1101ce0
// 地址: 0x1101ce0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

sub_11020cc(arg2, arg1)
int32_t x0_2 = sub_1102388(arg2)

if (x0_2 != 0)
    while (true)
        if ((x0_2 & 0x80000000) == 0)
            int64_t var_38
            sub_1102174(arg2, 0xfffffffe, &var_38)
            void var_80
            int64_t var_68
            
            if (sub_1102398(arg2, &var_80) == 0)
                if (var_68 == 0)
                label_1101d28:
                    x0_2 = sub_1102388(arg2)
                    
                    if (x0_2 == 0)
                        break
                    
                    continue
                else
                    int64_t x1_2
                    
                    if (var_38 == arg3[3])
                        x1_2 = 6
                    else
                        x1_2 = 2
                    
                    int32_t x0_7 = var_68(1, x1_2, *arg3, arg3, arg2)
                    
                    if (x0_7 == 8)
                        if (var_38 != arg3[3])
                            goto label_1101d28
                        
                        fprintf(__sF + 0x130, "libunwind: %s - %s\n", "unwind_phase2", 
                            "during phase1 personality function said it would stop here, but now in "
                        "phase2 it did not stop here")
                        fflush(__sF + 0x130)
                        abort()
                        noreturn
                    
                    if (x0_7 == 7)
                        sub_11023d8(arg2)
        
        return 2

return 5
