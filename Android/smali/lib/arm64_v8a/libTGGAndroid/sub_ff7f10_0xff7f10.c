// 函数: sub_ff7f10
// 地址: 0xff7f10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s< 1 || arg5 s< 1)
    return 

uint64_t x9_1 = zx.q(arg5)
int64_t j_7 = x9_1 & 0xfffffff8
void* i = nullptr
int64_t j_4 = x9_1 & 0xffffffe0
void* x14_1 = &arg1[0x10]
char* x16_1 = arg1

do
    char* x17_1 = arg2 + i
    int64_t j_5
    
    if (arg5 u>= 8)
        int64_t x2 = i * x9_1
        
        if (&arg1[x2] u< i + arg2 + 1 && x17_1 u< &arg1[x2 + x9_1])
            j_5 = 0
            goto label_ff8014
        
        int64_t j_6
        int128_t v0
        
        if (arg5 u>= 0x20)
            char temp0_1 = *x17_1
            v0.b = temp0_1
            v0:1.b = temp0_1
            v0:2.b = temp0_1
            v0:3.b = temp0_1
            v0:4.b = temp0_1
            v0:5.b = temp0_1
            v0:6.b = temp0_1
            v0:7.b = temp0_1
            v0:8.b = temp0_1
            v0:9.b = temp0_1
            v0:0xa.b = temp0_1
            v0:0xb.b = temp0_1
            v0:0xc.b = temp0_1
            v0:0xd.b = temp0_1
            v0:0xe.b = temp0_1
            v0:0xf.b = temp0_1
            int64_t j_2 = j_4
            void* x3_2 = x14_1
            int64_t j
            
            do
                *(x3_2 - 0x10) = v0
                *x3_2 = v0
                j = j_2
                j_2 -= 0x20
                x3_2 += 0x20
            while (j != 0x20)
            
            if (j_4 != x9_1)
                j_6 = j_4
                j_5 = j_4
                
                if ((x9_1 & 0x18) == 0)
                    goto label_ff8014
                
                goto label_ff7fe0
        else
            j_6 = 0
        label_ff7fe0:
            void* x2_3 = &x16_1[j_6]
            int64_t j_3 = neg.q(j_7) + j_6
            int64_t j_1
            
            do
                char temp0_2 = *x17_1
                v0.b = temp0_2
                v0:1.b = temp0_2
                v0:2.b = temp0_2
                v0:3.b = temp0_2
                v0:4.b = temp0_2
                v0:5.b = temp0_2
                v0:6.b = temp0_2
                v0:7.b = temp0_2
                j_1 = j_3
                j_3 += 8
                *x2_3 = v0.q
                x2_3 += 8
            while (j_1 != -8)
            j_5 = j_7
            
            if (j_7 != x9_1)
                goto label_ff8014
    else
        j_5 = 0
    label_ff8014:
        
        do
            x16_1[j_5] = *x17_1
            j_5 += 1
        while (x9_1 != j_5)
    i += 1
    x14_1 += x9_1
    x16_1 = &x16_1[x9_1]
while (i != zx.q(arg4))
