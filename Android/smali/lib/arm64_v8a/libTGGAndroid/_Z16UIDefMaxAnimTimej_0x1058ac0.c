// 函数: _Z16UIDefMaxAnimTimej
// 地址: 0x1058ac0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(*(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458) + 8)
int64_t* x8_2 = *x19
int32_t entry_x1
int32_t entry_x2
uint64_t x8_3
int64_t* x9_1
int32_t entry_result

if (x8_2 == 0)
    if (x19[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, entry_x1, entry_x2, entry_result = AssetCatalogLoadAsset(x19, false, true)
    x9_1 = **x19
    x8_3 = zx.q(x9_1[1].d)
    
    if (x8_3.d s< 1)
        return 0
else
    x9_1 = *x8_2
    x8_3 = zx.q(x9_1[1].d)
    
    if (x8_3.d s< 1)
        return 0

void* x9_2 = *x9_1
uint64_t result
int64_t i_4

if (x8_3.d != 1)
    i_4 = x8_3 & 0xfffffffe
    int32_t result_2 = 0
    int32_t result_3 = 0
    void* x13_1 = x9_2
    int64_t i_3 = i_4
    int64_t i
    
    do
        int32_t x15_1 = *(x13_1 + 4)
        int32_t x17_1
        
        if (x15_1 != 6)
            x17_1 = *(x13_1 + 0x17c)
            
            if (x17_1 == 6)
                goto label_1058be8
            
            goto label_1058bc4
        
        entry_result = *(x13_1 + 0x70)
        x17_1 = *(x13_1 + 0x17c)
        
        if (x17_1 == 6)
        label_1058be8:
            arg1 = *(x13_1 + 0x1e8)
            
            if (x15_1 != 6)
                goto label_1058bcc
            
            goto label_1058bf4
        
    label_1058bc4:
        
        if (x15_1 == 6)
        label_1058bf4:
            entry_x1 = *(x13_1 + 0x6c)
            
            if (x17_1 == 6)
                entry_x2 = *(x13_1 + 0x1e4)
        else
        label_1058bcc:
            
            if (x17_1 == 6)
                entry_x2 = *(x13_1 + 0x1e4)
        
        int32_t result_4 = entry_x1 + entry_result
        bool v_1
        bool z_1
        bool n_1
        
        if (x15_1 == 6)
            v_1 = add_overflow(result_2, neg.d(result_4))
            z_1 = result_2 == result_4
            n_1 = result_2 - result_4 s< 0
        else
            n_1 = false
            z_1 = false
            v_1 = false
        
        entry_result = entry_x2 + arg1
        
        if (z_1 || n_1 != v_1)
            result_2 = result_4
        
        bool v_2
        bool z_2
        bool n_2
        
        if (x17_1 == 6)
            v_2 = add_overflow(result_3, neg.d(entry_result))
            z_2 = result_3 == entry_result
            n_2 = result_3 - entry_result s< 0
        else
            n_2 = false
            z_2 = false
            v_2 = false
        
        if (z_2 || n_2 != v_2)
            result_3 = entry_result
        
        i = i_3
        i_3 -= 2
        x13_1 += 0x2f0
    while (i != 2)
    
    if (result_2 s> result_3)
        result = zx.q(result_2)
    else
        result = zx.q(result_3)
    
    if (i_4 != x8_3)
        goto label_1058c28
else
    i_4 = 0
    result = 0
label_1058c28:
    int32_t* x9_4 = x9_2 + i_4 * 0x178 + 0x70
    int64_t i_2 = x8_3 - i_4
    int64_t i_1
    
    do
        if (x9_4[-0x1b] == 6)
            int32_t result_1 = x9_4[-1] + *x9_4
            
            if (result.d s> result_1)
                result = zx.q(result.d)
            else
                result = zx.q(result_1)
        
        i_1 = i_2
        i_2 -= 1
        x9_4 = &x9_4[0x5e]
    while (i_1 != 1)
return result
