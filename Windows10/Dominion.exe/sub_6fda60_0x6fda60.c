// 函数: sub_6fda60
// 地址: 0x6fda60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* ecx = data_cf65b8

if (ecx == 0)
    goto label_6fda8c

int32_t bottom = (*(*ecx + 0x34))()

if (bottom.b == 0)
    ecx = data_cf65b8
label_6fda8c:
    int32_t esi_1 = 0
    
    if (ecx != 0)
        esi_1 = ecx[7]
    
    bottom = data_147b084
    void** ecx_1 = &data_cb39f4
    data_cb3a2d = 1
    data_cf65b8 = &data_cb39f4
    
    if (bottom == 0)
        data_cb3a08 = 0x400
        data_cb3a0c = 0x300
    else
        RECT rect
        GetClientRect(bottom, &rect)
        ecx_1 = data_cf65b8
        ecx_1[5] = rect.right
        bottom = rect.bottom
        ecx_1[6] = bottom
    
    ecx_1[7] = esi_1
    ecx_1[8].b = 1
    ecx_1[1] = "Game.xpack"

CookieCheckFunction(bottom)
return bottom
