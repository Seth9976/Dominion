// 函数: oggpack_write
// 地址: 0x109742c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = arg1

if (arg3 u> 0x20)
label_1097450:
    arg1 = x19[2]
    
    if (arg1 != 0)
        free(arg1)
    
    __builtin_memset(x19, 0, 0x28)
    return 

void* x10_1 = x19[3]
int64_t x8_1 = x19[4]

if (*x19 s< x8_1 - 4)
    goto label_109748c

if (x10_1 == 0)
    return 

if (x8_1 s> 0x7ffffffffffffeff)
    goto label_1097450

arg1 = realloc(x19[2], x8_1 + 0x100)

if (arg1 == 0)
    goto label_1097450

int64_t x8_3 = x19[4]
int64_t x9_5 = *x19
x19[2] = arg1
x10_1 = arg1 + x9_5
x19[3] = x10_1
x19[4] = x8_3 + 0x100
label_109748c:
uint64_t x11_2 = zx.q(x19[1].d)
int64_t x9_3 = *(&data_878130 + (sx.q(arg3) << 3)) & arg2
int32_t x8_2 = x11_2.d + arg3
*x10_1 |= (x9_3 << x11_2).b

if (x8_2 s>= 8)
    *(x19[3] + 1) = (x9_3 u>> zx.q(8 - x19[1].d)).b
    
    if (x8_2 s>= 0x10)
        *(x19[3] + 2) = (x9_3 u>> zx.q(0x10 - x19[1].d)).b
        
        if (x8_2 s>= 0x18)
            *(x19[3] + 3) = (x9_3 u>> zx.q(0x18 - x19[1].d)).b
            
            if (x8_2 s>= 0x20)
                int32_t x10_11 = x19[1].d
                
                if (x10_11 == 0)
                    *(x19[3] + 4) = 0
                else
                    *(x19[3] + 4) = (x9_3 u>> zx.q(0x20 - x10_11)).b

uint64_t x8_5

if (x8_2 s< 0)
    x8_5 = zx.q(x8_2 + 7)
else
    x8_5 = zx.q(x8_2)

int64_t x8_6 = (x8_5 & 0xfffffff8) << 0x20 s>> 0x23
int64_t x8_7 = x19[3] + x8_6
*x19 += x8_6
x19[3] = x8_7
x19[1].d = x8_2 & 7
