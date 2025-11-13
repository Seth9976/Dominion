// 函数: sub_552d10
// 地址: 0x552d10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_c = arg1
uint32_t result = sub_562f10(arg3, arg2, var_c)

if (result == 0)
    return result

void* eax = sub_573400()
uint32_t esi_1 = zx.d(result.w)
int32_t ebx_1 = *(eax + 0xc)
void* edi = *(eax + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_1 = esi_1 * 0x64
sub_576e90(eax_1, edi, &var_c, ebx_1, *(eax_1 + edi + 0x1a4c), 0)
int32_t var_28_1 = var_c + 1
return sub_564740(0)
