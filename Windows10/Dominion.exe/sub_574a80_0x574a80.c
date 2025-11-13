// 函数: sub_574a80
// 地址: 0x574a80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg5
int32_t esi = arg2
int32_t* i = nullptr
int32_t var_c = esi
*ebx = 0
arg5 = nullptr

if (*(arg3 + 0x19a4) s<= 0)
    arg1.b = 0
    return arg1

void* edi_1 = arg3 + 0x152c8
void* eax = arg3

do
    if (*(edi_1 + 4) == esi && *edi_1 == 0xe01)
        uint32_t esi_1 = *(edi_1 + 8)
        
        if (esi_1 == 0x3f1)
            esi = var_c
        else
            if (esi_1 != 0)
                if (esi_1 - 7 u> 0x41)
                    sub_591930()
                
                if (esi_1 s>= 0x48)
                    sub_591930()
                
                esi_1 = zx.d((*(arg3 + esi_1 * 0x10 + 0x152c)).w)
                
                if (esi_1 u>= 0x320)
                    sub_591930()
                
                i = arg5
            
            if (*(esi_1 * 0x64 + arg3 + 0x1a4c) != arg4)
                eax = arg3
                esi = var_c
            else
                int32_t ecx_1 = *ebx
                esi = var_c
                
                if (arg4 != 0xe26)
                    *ebx = *(edi_1 + 0x14) + ecx_1
                    eax = arg3
                else
                    *ebx = ecx_1 + 1
                    eax = arg3
    
    i += 1
    edi_1 += 0x20
    arg5 = i
while (i s< *(eax + 0x19a4))

eax.b = *ebx != 0
return eax
