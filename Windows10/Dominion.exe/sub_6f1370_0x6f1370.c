// 函数: sub_6f1370
// 地址: 0x6f1370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
POINT point_1
point_1.y = arg1
void var_28
GetWindowRect(GetDlgItem(data_147d470, 0x80), &var_28)
ScreenToClient(data_147d470, &var_28)
POINT point
ScreenToClient(data_147d470, &point)
int128_t var_58
int32_t var_24

if (arg2 s< var_24 - 0xa)
    point_1.x = point_1.y
    point_1.y = var_24 + 0xa
    ClientToScreen(data_147d470, &point_1)
    SetCursorPos(point_1.x, point_1.y)
    int32_t eax_3 = 0
    float xmm1_2 = data_147d480 + 0.5f
    __builtin_memcpy(&var_58, 
        "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\xa0\x40\x00\x00\x20\x41\x00\x00\x48\x42\x00\x00\xc8\x"
    "42\x00\x00\xfa\x43\x00\x00\x7a\x44\x00\x40\x9c\x45\x00\x40\x1c\x46\x00\x50\x43\x47\x00\x50\xc3"
    "47", 
        0x30)
    float xmm0_1
    
    while (true)
        xmm0_1 = *(&var_58 + (eax_3 << 2))
        
        if (xmm0_1 >= xmm1_2)
            break
        
        eax_3 += 1
        
        if (eax_3 u>= 0xc)
            data_147d480 = 0x47c35000
            return eax_3
    
    float xmm2_1 = xmm0_1
    xmm2_1 - 0f
    eax_3:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
        | (xmm2_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        xmm2_1 = 1f
    
    data_147d480 = xmm2_1
    return eax_3

int32_t y = point.y

if (arg2 s> y)
    point_1.x = point_1.y
    point_1.y = point.y - 0x14
    ClientToScreen(data_147d470, &point_1)
    SetCursorPos(point_1.x, point_1.y)
    y = 0
    float xmm1_4 = data_147d484 - 0.5f
    float xmm2_2 = 100000f
    __builtin_memcpy(&var_58, 
        "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\xa0\x40\x00\x00\x20\x41\x00\x00\x48\x42\x00\x00\xc8\x"
    "42\x00\x00\xfa\x43\x00\x00\x7a\x44\x00\x40\x9c\x45\x00\x40\x1c\x46\x00\x50\x43\x47\x00\x50\xc3"
    "47", 
        0x30)
    int32_t xmm0_3
    
    while (true)
        float xmm0_2 = *(&var_58 + (y << 2))
        
        if (xmm0_2 f>= (xmm1_4 ^ 0x80000000))
            xmm2_2 = xmm0_2
            xmm0_3 = (zx.o(0)).d
            xmm2_2 f- 0
            y:1.b = (xmm2_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2
                | (xmm2_2 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (not(p_4))
                break
        else
            y += 1
            
            if (y u< 0xc)
                continue
        
        xmm0_3 = xmm2_2 ^ 0x80000000
        break
    
    data_147d484 = xmm0_3

return y
