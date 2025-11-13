// 函数: sub_6f1800
// 地址: 0x6f1800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
BOOL result = sub_6ee800()

if (result != 0)
    int32_t var_34
    GetWindowRect(GetDlgItem(data_147d470, 0x80), &var_34)
    ScreenToClient(data_147d470, &var_34)
    POINT point
    ScreenToClient(data_147d470, &point)
    RECT rect
    GetClientRect(data_147d470, &rect)
    HDC eax_3 = CreateCompatibleDC(arg1)
    HBITMAP eax_4 = CreateCompatibleBitmap(arg1, rect.right, rect.bottom)
    HGDIOBJ h = SelectObject(eax_3, eax_4)
    sub_6f0d00(eax_3)
    int32_t edx_1 = var_34
    int32_t var_30
    BitBlt(arg1, edx_1, var_30, point.x - edx_1, point.y - var_30, eax_3, edx_1, var_30, 
        &(*class std::_Func_impl_no_alloc<class <lambda_a6a8acb2297eaa7fcca6754da20536c8>, void> `RTTI Type Descriptor'
            .name)[0x30])
    SelectObject(eax_3, h)
    DeleteObject(eax_4)
    result = DeleteDC(eax_3)

CookieCheckFunction(result)
return result
