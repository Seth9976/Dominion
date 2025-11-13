// 函数: sub_108db48
// 地址: 0x108db48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

oggpack_write(arg1, 3, 8)
oggpack_write(arg1, 0x76, 8)
oggpack_write(arg1, 0x6f, 8)
oggpack_write(arg1, 0x72, 8)
oggpack_write(arg1, 0x62, 8)
oggpack_write(arg1, 0x69, 8)
oggpack_write(arg1, 0x73, 8)
oggpack_write(arg1, 0x35, 0x20)
int64_t x21 = 0

do
    oggpack_write(arg1, sx.q((*"Xiph.Org libVorbis I 20180316 (Now 100% fewer shells)")[x21]), 8)
    x21 += 1
while (x21.d != 0x35)

oggpack_write(arg1, sx.q(arg2[2].d), 0x20)

if (arg2[2].d s>= 1)
    int64_t i = 0
    
    do
        if (*(*arg2 + (i << 3)) == 0)
            oggpack_write(arg1, 0, 0x20)
        else
            oggpack_write(arg1, sx.q(*(arg2[1] + (i << 2))), 0x20)
            int32_t j = arg2[1][i]
            
            if (j != 0)
                char* x23_1 = *(*arg2 + (i << 3))
                
                do
                    int64_t x1_3 = sx.q(*x23_1)
                    x23_1 = &x23_1[1]
                    j -= 1
                    oggpack_write(arg1, x1_3, 8)
                while (j != 0)
        
        i += 1
    while (i s< sx.q(arg2[2].d))

return oggpack_write(arg1, 1, 1) __tailcall
