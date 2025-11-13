// 函数: sub_6ee530
// 地址: 0x6ee530
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_1c

if (data_147d49c == 0)
    var_1c = 0x8e
    HWND hDlg = data_147d470
    data_147d49c = 1
    HWND hWnd = GetDlgItem(hDlg, var_1c)
    var_1c = zx.d(data_147d49c)
    BOOL eax
    eax, arg1 = EnableWindow(hWnd, var_1c)

int32_t* edi = data_147ded0

if (edi == 0 || edi[1] != 0x19)
    return 

var_1c = arg1
int32_t* esi_1 = &data_801800
sub_63d720(&var_1c, &data_801800)
char* eax_1 = edi[8]
char* const ecx_2 = &data_801800
int32_t var_20_2 = *edi

if (eax_1 != 0)
    ecx_2 = eax_1

sub_6c25f0(ecx_2)
int32_t* eax_2 = edi[8]

if (eax_2 != 0)
    esi_1 = eax_2

var_1c = **edi
sub_6c32a0(esi_1)
