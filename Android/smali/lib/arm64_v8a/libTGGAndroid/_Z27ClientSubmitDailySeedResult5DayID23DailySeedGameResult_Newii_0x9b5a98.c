// 函数: _Z27ClientSubmitDailySeedResult5DayID23DailySeedGameResult_Newii
// 地址: 0x9b5a98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t i = arg1
int32_t var_70 = arg1
int32_t var_6c = arg2
int32_t var_68 = arg3
int32_t var_64 = arg4
void* x0 = GetActiveProfile()
uint64_t x23 = zx.q(i) | zx.q(i s>> 4)
int32_t* x8_2 = *(*(x0 + 0x7740) + ((zx.q(*(x0 + 0x7748)) & x23) << 3))
int64_t var_60
void* x0_7
void* x21

if (x8_2 != 0)
    while (*x8_2 != i)
        x8_2 = *(x8_2 + 0x20)
        
        if (x8_2 == 0)
            goto label_9b5af0
    
    x21 = &x8_2[1]
    
    if ((DailyResultIsBetter(x21, zx.q(x20)) & 1) != 0)
        goto label_9b5af4
    
    x0_7 = GetClient()
    void* result
    
    if (*(x0_7 + 0x18) != 3)
    label_9b5c50:
        result = GetActiveProfile()
        
        if (zx.d(*(result + 0x7718)) == 0)
        label_9b5c64:
            __builtin_memset(&var_60:4, 0, 0x18)
            var_60.d = 4
            void* x0_11 = GetClient()
            
            if (*(x0_11 + 0x18) == 3)
                NetworkSendMessage(zx.q(*(x0_11 + 0x14)), 0xf42cb, 0x1c, &var_60)
            
            result = GetActiveProfile()
            *(result + 0x7718) = 1
    else
    label_9b5b94:
        NetworkSendMessage(zx.q(*(x0_7 + 0x14)), 0xf42bb, 0x10, &var_70)
        result = GetActiveProfile()
        
        if (zx.d(*(result + 0x7718)) == 0)
            goto label_9b5c64
    
    return result

label_9b5af0:
x21 = nullptr
label_9b5af4:
void* x0_1 = GetClient()
char x8_3 = (*(x0_1 + 0x7600)).b
var_60 = *(x0_1 + 0x75f8)
void* x0_2 = GetClient()
Date* x22_1 = *(*(x0_2 + 0x75d8) + ((((0xffff00ff & zx.q(var_60.d << 0x10))
    | zx.q(zx.d((var_60:4.d).b) << 8) | zx.q(x8_3)) & zx.q(*(x0_2 + 0x75e0))) << 3))
int32_t x8_11

if (x22_1 == 0)
label_9b5b54:
    x8_11 = 0
else
    while (true)
        if ((operator!=(&var_60, x22_1) & 1) == 0)
            x8_11 = *(x22_1 + 0x10)
            break
        
        x22_1 = *(x22_1 + 0x28)
        
        if (x22_1 == 0)
            goto label_9b5b54

int32_t x9_4

x9_4 = x21 == 0 ? 0 : x20

int32_t x24_1

x24_1 = x8_11 == i ? x9_4 : 0

int32_t x22_2

x22_2 = x8_11 == i ? 0 : x20

bool z_1

if (x8_11 == i)
    z_1 = x21 == 0
else
    z_1 = false

int32_t x25_1

x25_1 = z_1 ? x20 : 0

void* x0_9 = GetActiveProfile()
uint64_t x23_1 = zx.q(*(x0_9 + 0x7748)) & zx.q(x23.d)
int32_t* x8_13 = *(*(x0_9 + 0x7740) + (zx.q(x23_1.d) << 3))

if (x8_13 == 0)
label_9b5c08:
    int32_t* x0_10 = XPooledMalloc(0x28)
    *x0_10 = i
    x0_10[1] = i
    x0_10[2] = 0
    x0_10[3] = x25_1
    x0_10[4] = x24_1
    x0_10[5] = x22_2
    x0_10[6] = 0
    uint64_t x9_7 = x23_1 << 3
    *(x0_10 + 0x20) = *(*(x0_9 + 0x7740) + x9_7)
    *(*(x0_9 + 0x7740) + x9_7) = x0_10
    *(x0_9 + 0x774c) += 1
    x0_7 = GetClient()
    
    if (*(x0_7 + 0x18) == 3)
        goto label_9b5b94
    
    goto label_9b5c50

while (*x8_13 != i)
    x8_13 = *(x8_13 + 0x20)
    
    if (x8_13 == 0)
        goto label_9b5c08

x8_13[1] = i
x8_13[2] = 0
x8_13[3] = x25_1
x8_13[4] = x24_1
x8_13[5] = x22_2
x8_13[6] = 0
x0_7 = GetClient()

if (*(x0_7 + 0x18) != 3)
    goto label_9b5c50

goto label_9b5b94
