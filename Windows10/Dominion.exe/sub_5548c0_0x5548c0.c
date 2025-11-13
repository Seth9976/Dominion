// 函数: sub_5548c0
// 地址: 0x5548c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
void* eax
int32_t ecx
eax, ecx = __chkstk(0x1948)
int32_t esi
int32_t var_14 = esi
int32_t var_1c = ecx
int32_t var_20 = 0
sub_568960(eax, 0, 0x3ea, 0)
int32_t arg_28[0x320]
void arg_cb0
__builtin_memcpy(&arg_28, sub_562690(esi, &arg_cb0, 0, 0), 0xc84)
int32_t ecx_6 = 0
int32_t edi = 0
int32_t var_8 = 0

if (arg1 s> 0)
    do
        int16_t esi_2 = (arg_28[edi]).w
        void* eax_3 = sub_573400()
        uint32_t esi_3 = zx.d(esi_2)
        void* ecx_2 = *(eax_3 + 0xc)
        void* ecx_3 = *(eax_3 + 4)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        int32_t eax_4 = esi_3 * 0x64
        int32_t arg_4
        sub_576e90(eax_4, ecx_3, &arg_4, ecx_2, *(eax_4 + ecx_3 + 0x1a4c), 0)
        uint32_t arg_8[0x4]
        uint32_t* eax_5 = sub_576c00(&arg_8, arg_4)
        edi += 1
        int32_t arg_18 = eax_5[4]
        ecx_6 = var_8 + (*eax_5).d
        var_8 = ecx_6
    while (edi s< arg1)

int32_t var_1c_4 = ecx_6
int32_t var_1c_5 = ecx_6
return sub_564740(1)
