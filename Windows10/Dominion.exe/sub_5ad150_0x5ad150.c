// 函数: sub_5ad150
// 地址: 0x5ad150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t* var_8 = arg3
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
uint32_t esi = arg4
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2

if (esi s<= 0x20)
    return sub_5acff0(arg1, arg2, arg3, arg7)

uint32_t eax_2 = esi u>> 1
uint32_t esi_1 = esi - eax_2
arg4 = eax_2
void* eax_4 = &arg3[esi_1 * 3]
int32_t eax_6
int32_t* esp_1

if (esi_1 s> arg6)
    sub_5ad150(esi_1, arg5, arg6)
    int32_t var_1c_3 = arg7
    eax_6 = sub_5ad150(arg4, arg5, arg6)
    esp_1 = &arg4
else
    eax_6 =
        sub_5adae0(sub_5adae0(eax_4, eax_4, arg3, esi_1, arg5, arg7), arg2, eax_4, arg4, arg5, arg7)
    int32_t __saved_edi
    esp_1 = &__saved_edi

*(esp_1 - 4) = arg7
*(esp_1 - 8) = arg6
*(esp_1 - 0xc) = arg5
*(esp_1 - 0x10) = arg4
*(esp_1 - 0x14) = esi_1
*(esp_1 - 0x18) = arg2
int32_t result = sub_5adcb0(eax_6, eax_4, arg3)
*esp_1
esp_1[1]
esp_1[2]
return result
