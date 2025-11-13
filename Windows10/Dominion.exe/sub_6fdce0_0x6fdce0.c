// 函数: sub_6fdce0
// 地址: 0x6fdce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ecx

if (data_147dec0 != data_147dec4 && sub_6f2a60(ecx).b != 0)
    int32_t eax_1 = data_147dec0
    int32_t* ecx_1 = data_cf65b8
    int32_t esi = *((eax_1 << 2) + &data_147dcc0)
    data_147dec0 = eax_1 + 1
    (*(*ecx_1 + 4))()
    sub_6fda60()
    void* eax_4 = data_cf65b4
    HWND hWnd = data_147b084
    *(eax_4 + 0x1c) = 1
    *(eax_4 + 0x28) = 0
    *(eax_4 + 0x20) = 0
    *(eax_4 + 0x24) = esi
    SetFocus(hWnd)
    HWND eax_5
    eax_5.b = 1
    return eax_5

struct _EXCEPTION_REGISTRATION_RECORD** eax
eax.b = 0
return eax
