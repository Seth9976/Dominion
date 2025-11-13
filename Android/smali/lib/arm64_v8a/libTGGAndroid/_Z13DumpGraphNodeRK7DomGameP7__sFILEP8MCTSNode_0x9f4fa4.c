// 函数: _Z13DumpGraphNodeRK7DomGameP7__sFILEP8MCTSNode
// 地址: 0x9f4fa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

for (int64_t i = 0; i != 0x10000; i += 1)
    for (void* j = *(&data_12f9f30 + (i << 3)); j != 0; j = *(j + 0x18))
        if (*(j + 8) == arg3)
            int32_t x2 = *(j + 0x10)
            void* x8_2 = arg3 + (sx.q(*(arg3 + 0xb4)) << 2)
            fprintf(arg2, "%d [label="%d\n%f %f\n%d"] ", x2, zx.q(x2), zx.q(*(arg3 + 0xb0)), 
                (fconvert.d(*(x8_2 + 0x94))).d, (fconvert.d(*x8_2)).d)
            
            if (zx.d(*(arg3 + 0xe4)) != 0)
                fwrite("[shape="box"] ", 0xe, 1, arg2)
            
            if (*(arg3 + 0xb8) != *(arg3 + 0xb4) && zx.d(*(arg3 + 0xe4)) == 0)
                fwrite("[color="red"] ", 0xe, 1, arg2)
            
            if (*(arg3 + 0xe0) s>= 1)
                fwrite("[penwidth="2"] ", 0xf, 1, arg2)
            
            size_t result = fwrite(0x725ef8, 2, 1, arg2)
            int32_t x9_2 = *(arg3 + 0xd8)
            
            if (x9_2 s>= 1)
                int64_t* x8_7 = *(arg3 + 0xd0)
                int64_t k = 0
                
                do
                    int32_t x10_3 = *(x8_7 + k * 0x70 + 0xc)
                    
                    if (x10_3 != 0)
                        __sFILE* stream
                        char* format
                        uint64_t x3_7
                        
                        if (x10_3 s< 2)
                            int64_t x9_6 = 0
                            
                            while (true)
                                void* x10_4 = *(&data_12f9f30 + (x9_6 << 3))
                                
                                if (x10_4 != 0)
                                    while (*(x10_4 + 8) != *x8_7[k * 0xe])
                                        x10_4 = *(x10_4 + 0x18)
                                        
                                        if (x10_4 == 0)
                                            goto label_9f51a0
                                    
                                    x3_7 = zx.q(*(x10_4 + 0x10))
                                    stream = arg2
                                    format = "%d->%d "
                                    break
                                
                            label_9f51a0:
                                x9_6 += 1
                                
                                if (x9_6 == 0x10000)
                                    goto label_9f53ac
                        else
                            fprintf(arg2, "e%d [shape="triangle"] ", zx.q(data_14a71b8))
                            fprintf(arg2, "[label="%d"] ", zx.q(*(*(arg3 + 0xd0) + k * 0x70 + 0xc)))
                            fwrite(0x725ef8, 2, 1, arg2)
                            x3_7 = zx.q(data_14a71b8)
                            stream = arg2
                            format = "%d->e%d "
                        
                        fprintf(stream, format, zx.q(x2), x3_7)
                        int64_t x21_1 = k * 0x70
                        char var_460[0x400]
                        sub_9f45c0(&var_460, arg3, *(arg3 + 0xd0) + x21_1)
                        void* x8_14 = *(arg3 + 0xd0) + x21_1
                        fprintf(arg2, "[label="%f\n%f\n%s\n%d"] ", &var_460, zx.q(*(x8_14 + 0x50)), 
                            (fconvert.d(*(x8_14 + 0x54))).d, 
                            (fconvert.d(*(x8_14 + (sx.q(*(arg3 + 0xb4)) << 2) + 0x2c))).d)
                        
                        if (*(arg3 + 0xb8) != *(arg3 + 0xb4))
                            fwrite("[color="red"] ", 0xe, 1, arg2)
                        
                        if (*(*(arg3 + 0xd0) + k * 0x70 + 0x64) s>= 1)
                            fwrite("[penwidth="2"] ", 0xf, 1, arg2)
                        
                        result = fwrite(0x725ef8, 2, 1, arg2)
                        x8_7 = *(arg3 + 0xd0)
                        
                        if (*(x8_7 + k * 0x70 + 0xc) s> 1)
                            int64_t x21_2 = 0
                            
                            do
                                int64_t x9_15 = 0
                                void* x10_5
                                
                                while (true)
                                    x10_5 = *(&data_12f9f30 + (x9_15 << 3))
                                    
                                    if (x10_5 != 0)
                                        break
                                    
                                label_9f52f8:
                                    x9_15 += 1
                                    
                                    if (x9_15 == 0x10000)
                                        goto label_9f53ac
                                
                                while (*(x10_5 + 8) != *(x8_7[k * 0xe] + (x21_2 << 3)))
                                    x10_5 = *(x10_5 + 0x18)
                                    
                                    if (x10_5 == 0)
                                        goto label_9f52f8
                                
                                fprintf(arg2, "e%d->%d ", zx.q(data_14a71b8), zx.q(*(x10_5 + 0x10)))
                                
                                if (*(*(arg3 + 0xd0) + k * 0x70 + 0x64) s>= 1)
                                    fwrite("[penwidth="2"] ", 0xf, 1, arg2)
                                
                                if (*(arg3 + 0xb8) != *(arg3 + 0xb4))
                                    fwrite("[color="red"] ", 0xe, 1, arg2)
                                
                                result = fwrite(0x725ef8, 2, 1, arg2)
                                x8_7 = *(arg3 + 0xd0)
                                x21_2 += 1
                            while (x21_2 s< sx.q(*(x8_7 + k * 0x70 + 0xc)))
                        
                        data_14a71b8 += 1
                        x9_2 = *(arg3 + 0xd8)
                    
                    k += 1
                while (k s< sx.q(x9_2))
            
            return result

label_9f53ac:
pthread_kill(pthread_self(), 6)
DomGame* x0_7
int64_t x1_1
x0_7, x1_1 = XNoReturn()
return DumpGraph(x0_7, x1_1) __tailcall
