// 函数: _ZNK5Botan3TLS7Channel30secure_renegotiation_supportedEv
// 地址: 0xe5f838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x8 = *(entry_x0 + 0x40)
int64_t* i_2

if (x8 == 0)
    void* x8_3 = *(entry_x0 + 0x48)
    
    if (x8_3 == 0)
        return 0
    
    void* x8_4 = *(x8_3 + 0x108)
    
    if (x8_4 == 0)
        return 0
    
    int64_t* i = *(x8_4 + 0x50)
    
    if (i == 0)
        return 0
    
    i_2 = x8_4 + 0x50
    
    do
        int32_t x12_3 = i[4].d
        
        if (x12_3 s>= 0xff01)
            i_2 = i
        
        i = i[zx.q(x12_3 s< 0xff01 ? 1 : 0)]
    while (i != 0)
    
    if (i_2 == x8_4 + 0x50 || i_2[4].d s> 0xff01)
        return 0
else
    int64_t* i_3 = *(x8 + 0x108) + 0x50
    int64_t* i_1 = *i_3
    
    if (i_1 == 0)
        return 0
    
    i_2 = i_3
    
    do
        int32_t x12_1 = i_1[4].d
        
        if (x12_1 s>= 0xff01)
            i_2 = i_1
        
        i_1 = i_1[zx.q(x12_1 s< 0xff01 ? 1 : 0)]
    while (i_1 != 0)
    
    if (i_2 == i_3 || i_2[4].d s> 0xff01)
        return 0

uint64_t result = i_2[5]

if (result == 0)
    return result

return zx.q(__dynamic_cast(result, _typeinfo_for_Botan::TLS::Extension, 
    _typeinfo_for_Botan::TLS::Renegotiation_Extension, 0) != 0 ? 1 : 0)
