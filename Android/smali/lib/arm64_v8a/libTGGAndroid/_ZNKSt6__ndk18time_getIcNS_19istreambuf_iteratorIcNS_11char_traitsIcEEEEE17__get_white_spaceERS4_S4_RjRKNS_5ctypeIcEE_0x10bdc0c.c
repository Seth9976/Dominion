// 函数: _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIcEE
// 地址: 0x10bdc0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t& x20 = arg3
int64_t* x21 = arg2
int64_t* x23 = *x21

if (x23 != 0)
    goto label_10bdc54

while (true)
    if (x20 != 0 && *(x20 + 0x18) == *(x20 + 0x20))
        arg1 = (*(*x20 + 0x48))(x20)
    
    if (x20 == 0 || (*(x20 + 0x18) == *(x20 + 0x20) && arg1.d == 0xffffffff))
        x20 = nullptr
        
        if (x23 == 0)
            break
    else if (x23 != 0)
        break
    
    int64_t* x0_2 = *x21
    char* x8_8 = x0_2[3]
    
    if (x8_8 == x0_2[4])
        arg1 = (*(*x0_2 + 0x48))()
        
        if ((arg1.d & 0x80) != 0)
            break
    else
        arg1 = zx.q(*x8_8)
        
        if ((arg1.d & 0x80) != 0)
            break
    
    void* entry_x4
    
    if (((*(*(entry_x4 + 0x10) + ((zx.q(arg1.d) & 0xff) << 3))).d & 1) == 0)
        break
    
    arg1 = *x21
    int64_t x8_13 = *(arg1 + 0x18)
    
    if (x8_13 != *(arg1 + 0x20))
        *(arg1 + 0x18) = x8_13 + 1
        x23 = *x21
        
        if (x23 == 0)
            continue
    else
        (*(*arg1 + 0x50))()
        x23 = *x21
        
        if (x23 == 0)
            continue
    
label_10bdc54:
    
    if (x23[3] == x23[4])
        arg1 = (*(*x23 + 0x48))(x23)
        
        if (arg1.d == 0xffffffff)
            x23 = nullptr
            *x21 = 0
        else
            x23 = *x21

int64_t* x22_1 = *x21

if (x22_1 == 0 || x22_1[3] != x22_1[4])
    goto label_10bdd50

arg1 = (*(*x22_1 + 0x48))(x22_1)

if (arg1.d == 0xffffffff)
    x22_1 = nullptr
    *x21 = 0
    
    if (x20 != 0)
        goto label_10bdd5c
    
    goto label_10bddac

x22_1 = *x21
label_10bdd50:

if (x20 == 0)
label_10bddac:
    
    if (x22_1 == 0)
        *arg4 |= 2
    
    return 

label_10bdd5c:

if (*(x20 + 0x18) == *(x20 + 0x20))
    arg1 = (*(*x20 + 0x48))(x20)

if (*(x20 + 0x18) == *(x20 + 0x20) && arg1.d == 0xffffffff)
    goto label_10bddac

if (x22_1 != 0)
    *arg4 |= 2
