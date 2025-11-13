// 函数: _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIcEE
// 地址: 0x10bdfb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x23 = *arg2
int64_t** x21 = arg2
uint32_t& x20 = arg3

if (x23 == 0 || x23[3] != x23[4])
    goto label_10be00c

arg1 = (*(*x23 + 0x48))(x23)

if (arg1.d == 0xffffffff)
    x23 = nullptr
    *x21 = nullptr
    
    if (x20 != 0)
        goto label_10be018
    
    goto label_10be048

x23 = *x21
label_10be00c:

if (x20 != 0)
label_10be018:
    
    if (*(x20 + 0x18) == *(x20 + 0x20))
        arg1 = (*(*x20 + 0x48))(x20)
    
    if (*(x20 + 0x18) == *(x20 + 0x20) && arg1.d == 0xffffffff)
        goto label_10be048
    
    if (x23 == 0)
        goto label_10be050
    
    *arg4 |= 6
    return 

label_10be048:

if (x23 == 0)
    *arg4 |= 6
    return 

x20 = nullptr
label_10be050:
int64_t* x0_2 = *x21
char* x8_7 = x0_2[3]
uint64_t x1

if (x8_7 == x0_2[4])
    x1 = zx.q((*(*x0_2 + 0x48))())
else
    x1 = zx.q(*x8_7)

int64_t* entry_x4

if (((*(*entry_x4 + 0x48))(entry_x4, x1, 0).d & 0xff) != 0x25)
    *arg4 |= 4
    return 

int64_t* x22_1 = *x21
int64_t x8_15 = x22_1[3]

if (x8_15 == x22_1[4])
    (*(*x22_1 + 0x50))(x22_1)
    x22_1 = *x21
    
    if (x22_1 == 0 || x22_1[3] != x22_1[4])
        goto label_10be10c
    
label_10be0fc:
    arg1 = (*(*x22_1 + 0x48))(x22_1)
    
    if (arg1.d == 0xffffffff)
        x22_1 = nullptr
        *x21 = nullptr
        
        if (x20 != 0)
            goto label_10be118
        
        goto label_10be148
    
    x22_1 = *x21
else
    x22_1[3] = x8_15 + 1
    
    if (x22_1[3] == x22_1[4])
        goto label_10be0fc

label_10be10c:

if (x20 == 0)
label_10be148:
    
    if (x22_1 == 0)
        *arg4 |= 2
    
    return 

label_10be118:

if (*(x20 + 0x18) == *(x20 + 0x20))
    arg1 = (*(*x20 + 0x48))(x20)

if (*(x20 + 0x18) == *(x20 + 0x20) && arg1.d == 0xffffffff)
    goto label_10be148

if (x22_1 != 0)
    *arg4 |= 2
