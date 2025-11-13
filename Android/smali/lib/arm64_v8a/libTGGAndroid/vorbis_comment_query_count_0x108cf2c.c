// 函数: vorbis_comment_query_count
// 地址: 0x108cf2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x0_1 = strlen(arg2)
char* x0_3 = malloc((0x200000000 + (x0_1 << 0x20)) s>> 0x20)
strcpy(x0_3, arg2)
*(x0_3 + strlen(x0_3)) = 0x3d
int64_t x23 = sx.q(arg1[2].d)
int32_t x20_1

if (x23.d s< 1)
    x20_1 = 0
else
    int64_t x25_1 = *arg1
    int64_t x24_1 = 0
    x20_1 = 0
    
    do
        if (x0_1.d + 1 s< 1)
        label_108cfe4:
            x20_1 += 1
        else
            void* x27_1 = *(x25_1 + (x24_1 << 3))
            int64_t x28_1 = 0
            
            while (toupper(sx.d(*(x27_1 + x28_1))) == toupper(sx.d(x0_3[x28_1])))
                x28_1 += 1
                
                if (x28_1 s>= sx.q(x0_1.d + 1))
                    goto label_108cfe4
        
        x24_1 += 1
    while (x24_1 s< x23)

free(x0_3)
return zx.q(x20_1)
