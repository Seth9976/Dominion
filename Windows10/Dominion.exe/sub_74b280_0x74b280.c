// 函数: sub_74b280
// 地址: 0x74b280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* edi = arg2
int32_t* var_1c = edi
HGDIOBJ h = SelectObject(arg3, GetStockObject(BLACK_PEN))
LOGPEN var_18
GetObjectA(h, 0x10, &var_18)
var_18.lopnColor = arg5
SelectObject(arg3, CreatePenIndirect(&var_18))
int32_t* ecx_1 = &edi[1]
int32_t* var_20 = ecx_1
int32_t* var_24 = &edi[3]

if ((arg4 & 1) == 0)
    var_20 = ecx_1
    var_24 = &edi[3]
else
    int32_t x = *edi
    int32_t y = edi[3]
    MoveToEx(arg3, x, *ecx_1, nullptr)
    LineTo(arg3, x, y)
    edi = var_1c
    ecx_1 = var_20

char eax_6 = arg4

if ((eax_6 & 2) != 0)
    int32_t y_1 = *ecx_1
    int32_t x_1 = edi[2]
    MoveToEx(arg3, *var_1c, y_1, nullptr)
    LineTo(arg3, x_1, y_1)
    eax_6 = arg4

if ((eax_6 & 4) != 0)
    int32_t x_2 = var_1c[2]
    int32_t y_2 = *var_24
    MoveToEx(arg3, x_2, *var_20, nullptr)
    LineTo(arg3, x_2, y_2)
    eax_6 = arg4

if ((eax_6 & 8) != 0)
    int32_t y_3 = *var_24
    int32_t x_3 = var_1c[2]
    MoveToEx(arg3, *var_1c, y_3, nullptr)
    LineTo(arg3, x_3, y_3)

BOOL result = DeleteObject(SelectObject(arg3, h))
CookieCheckFunction(result)
return result
