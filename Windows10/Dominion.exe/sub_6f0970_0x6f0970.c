// 函数: sub_6f0970
// 地址: 0x6f0970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@QBDI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT wParam = arg1
int32_t* ecx = data_147ded0
void* const edi

if (ecx == 0 || ecx[1] != 0x1b)
    edi = nullptr
else
    edi = sub_5af880(ecx)

HWND hWnd = GetDlgItem(data_147d470, 0x76)

if (arg1 == 0xffffffff || wParam s>= *(edi + 8))
    LRESULT wParam_1 = SendMessageA(hWnd, 0x188, 0, 0)
    wParam = wParam_1
    
    if (wParam_1 == 0xffffffff)
        wParam = 0

SendMessageA(hWnd, 0x184, 0, 0)
int32_t i = 0

if (*(edi + 8) s> 0)
    do
        int32_t i_1 = i
        char* lParam_2
        sub_63df30(&lParam_2, "Graph %d")
        char* lParam_1 = lParam_2
        char* const lParam = &data_801800
        
        if (lParam_1 != 0)
            lParam = lParam_1
        
        SendMessageA(hWnd, 0x180, 0, lParam)
        int32_t var_8_1 = 0
        
        if (data_cf65bc != 0)
            char* lParam_3 = lParam_2
            
            if (lParam_3 != 0 && *lParam_3 != 0)
                char* eax_5 = sub_63d4e0(&lParam_2)
                int32_t temp0_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                    lParam_2 = &data_801800
        
        i += 1
        int32_t var_8_2 = 0xffffffff
    while (i s< *(edi + 8))

ShowWindow(GetDlgItem(data_147d470, 0x77), SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x78), SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x79), SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x7a), SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x8d), SW_SHOW)
SendMessageA(hWnd, 0x186, wParam, 0)
ShowWindow(GetDlgItem(data_147d470, 0x7b), SW_HIDE)
ShowWindow(GetDlgItem(data_147d470, 0x7c), SW_HIDE)
ShowWindow(GetDlgItem(data_147d470, 0x7d), SW_HIDE)
ShowWindow(GetDlgItem(data_147d470, 0x7e), SW_HIDE)
ShowWindow(GetDlgItem(data_147d470, 0x7f), SW_HIDE)
ShowWindow(GetDlgItem(data_147d470, 0x9e), SW_HIDE)
InvalidateRect(data_147d470, nullptr, 0)
sub_6ef970()

if (sub_6ee800() != 0)
    sub_6ee970(&data_147d484, &data_147d480)

sub_6ef470()
sub_6ef5e0()
sub_6ef6d0()
sub_6ef870()
BOOL result = EnableWindow(GetDlgItem(data_147d470, 0x8e), zx.d(data_147d49c))
data_147d478 = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
return result
