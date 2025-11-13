// 函数: sub_f42b08
// 地址: 0xf42b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* filename

if ((zx.d(*arg2) & 1) != 0)
    filename = *(arg2 + 0x10)
else
    filename = &arg2[1]

if (*(arg1 + 0x78) == 0)
    uint64_t x8_2 = zx.q((arg3 & 0xfffffffd) - 1)
    
    if (x8_2.d u<= 0x3b)
        char* mode = &data_73e066
        
        switch (x8_2)
            case 0, 0x10
                mode = &data_73e069
            label_f42bf8:
                FILE* fp = fopen(filename, mode)
                *(arg1 + 0x78) = fp
                
                if (fp == 0)
                    return 0
                
                *(arg1 + 0x98) = arg3
                
                if ((arg3 & 2) != 0 && fseek(fp, 0, 2) != 0)
                    fclose(*(arg1 + 0x78))
                    *(arg1 + 0x78) = 0
                    return 0
                
                return arg1
            case 4, 0x14
                mode = &data_751383
                goto label_f42bf8
            case 7
                mode = &data_729e99
                goto label_f42bf8
            case 8, 0x18
                mode = &data_761a90
                goto label_f42bf8
            case 0xb
                mode = &data_755538
                goto label_f42bf8
            case 0xc, 0x1c
                mode = "a+be"
                goto label_f42bf8
            case 0xf, 0x2f
                goto label_f42bf8
            case 0x13, 0x33
                mode = &data_735bbd
                goto label_f42bf8
            case 0x17
                mode = &data_739d6b
                goto label_f42bf8
            case 0x1b
                mode = "r+be"
                goto label_f42bf8
            case 0x37
                mode = &data_7a32f7
                goto label_f42bf8
            case 0x3b
                mode = "w+be"
                goto label_f42bf8

return 0
