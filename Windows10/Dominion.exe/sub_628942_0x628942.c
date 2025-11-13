// 函数: sub_628942
// 地址: 0x628942
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__bound_gprv_mema32(arg1, *arg1)
int32_t eflags
int32_t eflags_1 = __sti(eflags)
*arg2 = arg1:1.b
char temp0 = *arg2
*arg2 = arg1:1.b
arg1:1.b = temp0
*(__return_addr - 4) = 0x74006286
char temp0_1 = *arg2
*arg2 = arg1:1.b
arg1:1.b = temp0_1
char temp0_2 = *arg2
*arg2 = sx.d(arg1.w):1.b
int32_t eax
eax:1.b = temp0_2
arg5[-0x3cb3ffcf].b += 0x62
*(eax - 0x73ff9d7a)
int32_t entry_ebx
*(eax - 0x73ff9d7a) += entry_ebx.b
bool p = unimplemented  {add byte [eax-0x73ff9d7a], bl}
char temp0_3 = *arg2
*arg2 = eax:1.b
eax:1.b = temp0_3
uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags_1)
char temp0_4 = *arg2
*arg2 = __return_addr - 4

if (p)
    return 2

__bound_gprv_mema32(eax, *eax)
char temp0_5 = *(arg6 - 0x786dff9e)
*(arg6 - 0x786dff9e) = eax.b
eax.b = temp0_5
__bound_gprv_mema32(eax, *eax)
*arg6
void* edi = arg6 + 1
char temp0_6 = *arg2
*arg2 = temp0_4
char temp0_7 = *0xc6006287
*0xc6006287 = temp0_6
*(edi - 0x7821ff9e)
*(edi - 0x7821ff9e) = rol.b(*(edi - 0x7821ff9e), arg3.b)
bool c = unimplemented  {rol byte [edi-0x7821ff9e], cl}
__bound_gprv_mema32(eax, *eax)
int32_t eflags_2 = __cli(eflags_1)
char temp0_8 = *0xc6006287
*0xc6006287 = temp0_7
int32_t esp_6 = temp0_8
int16_t es
*(esp_6 - 4) = zx.d(es)
*0xc6006287 = eax:1.b
char temp3 = arg3.b
char temp4 = *(eax - 0x77e1ff9e)
arg3.b = adc.b(temp3, temp4, c)
bool p_1 = unimplemented  {adc cl, byte [eax-0x77e1ff9e]}
bool a = unimplemented  {adc cl, byte [eax-0x77e1ff9e]}
__bound_gprv_mema32(eax, *eax)
int32_t esi_1 = __outsd(0x6287, *esi, esi, eflags_2)
*0xc6006287 = eax:1.b

if (not(p_1))
    __bound_gprv_mema32(eax, *eax)
    undefined

__bound_gprv_mema32(eax, *eax)
*(eax - 0x776cff9e) = arg3
__bound_gprv_mema32(eax, *eax)
eax:1.b = (adc.b(temp3, temp4, c) s< 0 ? 1 : 0) << 7 | (adc.b(temp3, temp4, c) == 0 ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2
    | (adc.b(temp3, temp4, c) u< temp3 || (c && adc.b(temp3, temp4, c) == temp3) ? 1 : 0)
*0xc6006287 = eax:1.b
*(esp_6 - 8) = arg4
*(sub_64e7a0(*esp_6) + 0x18bc) = sub_628170
int32_t eax_2 = sub_628630(esp_6 - 0xc)
int32_t i = 0
*(esp_6 - 0x18) = eax_2
*(esp_6 - 0x10) = 0

if (eax_2 s> 0)
    *(esp_6 - 0x1c) = entry_ebx
    *(esp_6 - 0x20) = esi_1
    *(esp_6 - 0x24) = edi
    void* esp_12 = esp_6 - 0x24
    void* esi_2 = &data_1a96dfc
    
    do
        int32_t ecx_3 = *(esp_6 - 0xc)
        int32_t eax_3 = i << 3
        *(esp_6 - 0x14) = eax_3
        char* edi_1 = *(eax_3 + ecx_3)
        int32_t ecx_4 = *esp_6
        int32_t ebx
        
        if (*esi_2 == edi_1 && *(esi_2 - 4) == ecx_4 && *(esi_2 + 4) == 0xffffffff)
            ebx = *(esi_2 + 0x1c)
            
            if (ebx == 0)
                goto label_628a3b
            
            uint32_t eax_4 = zx.d(ebx.w)
            
            if (eax_4 u>= data_c23bac || *(eax_4 * 0x18d0 + data_c23ba8 + 0x18c8) != ebx)
                goto label_628a3b
            
            goto label_628a62
        
    label_628a3b:
        ebx = sub_67bd70(ecx_4, edi_1)
        *(esi_2 + 0x1c) = ebx
        
        if (ebx != 0)
            int32_t eax_8 = *esp_6
            *esi_2 = edi_1
            *(esi_2 - 4) = eax_8
            *(esi_2 + 4) = 0xffffffff
        label_628a62:
            void* eax_10 = sub_571b30(*(*(esp_6 - 0x14) + *(esp_6 - 0xc) + 4), 0x18)
            *(esp_12 - 4) = 0
            *(esp_12 - 8) = 0
            *(esp_12 - 0xc) = 0
            int32_t eax_11 = sub_5e01b0(eax_10, eax_10, ebx)
            *(esp_12 - 0x10) = 0
            sub_5e0df0(eax_11, eax_10, ebx)
            sub_5defb0(ebx, eax_10)
        
        esi_2 += 0x24
        i = *(esp_6 - 0x10) + 1
        *(esp_6 - 0x10) = i
    while (i s< *(esp_6 - 0x18))
    
    *esp_12
    *(esp_12 + 4)
    *(esp_12 + 8)

*(esp_6 - 8)
return i
