// 函数: vorbis_comment_query
// 地址: 0x108ce00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x0_1 = strlen(arg2)
char* x0_3 = malloc((0x200000000 + (x0_1 << 0x20)) s>> 0x20)
strcpy(x0_3, arg2)
*(x0_3 + strlen(x0_3)) = 0x3d
int64_t x24 = sx.q(arg1[2].d)

if (x24.d s>= 1)
    int64_t x23_1 = 0
    int32_t x26_1 = 0
    int64_t x27_1 = *arg1
    int64_t x25_1 = sx.q(x0_1.d + 1)
    
    do
        if (x0_1.d + 1 s>= 1)
            void* x19_1 = *(x27_1 + (x23_1 << 3))
            int64_t x20_1 = 0
            
            do
                if (toupper(sx.d(*(x19_1 + x20_1))) != toupper(sx.d(x0_3[x20_1])))
                    goto label_108ced8
                
                x20_1 += 1
            while (x20_1 s< x25_1)
        
        if (x26_1 == arg3)
            free(x0_3)
            return *(*arg1 + (x23_1 << 3)) + x25_1
        
        x26_1 += 1
    label_108ced8:
        x23_1 += 1
    while (x23_1 s< x24)

free(x0_3)
return 0
