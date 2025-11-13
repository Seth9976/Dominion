// 函数: sub_628f20
// 地址: 0x628f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(sub_64e7a0(arg1) + 0x18bc) = sub_628bc0
uint32_t eax_1 = sub_64e7a0(arg1)
sub_665db0(eax_1, &data_cadf48, eax_1, 0x3f800000, 0xffffffff, 0)
uint32_t eax_2 = sub_64e7a0(arg1)
sub_665db0(eax_2, &data_be41ac, eax_2, 0x3f800000, 0xffffffff, 0)
int32_t esi = data_ccf698
int32_t ecx_5 = data_ccf69c
int32_t ecx_8 = ecx_5 * 0x14
int32_t esi_1 = esi - ecx_8

if (esi_1 s> 0x14)
    esi_1 = 0x14

if (ecx_5 s> 0)
    uint32_t eax_5 = sub_64e7a0(arg1)
    sub_665db0(eax_5, &data_bf11a4, eax_5, 0x3f800000, 0xffffffff, 0)

void* eax_7 = (esi + 0x13) s/ 0x14 - 1

if (ecx_5 s< eax_7)
    uint32_t eax_6 = sub_64e7a0(arg1)
    eax_7 = sub_665db0(eax_6, &data_bf11b0, eax_6, 0x3f800000, 0xffffffff, 0)

int32_t var_20 = 0xffffffff
int32_t var_28 = 0xffffffff
void* result = sub_666120(sub_666120(eax_7, &data_be4350, arg1, 4), &data_be435c, arg1, esi_1)
void* ebx_1 = nullptr

if (esi_1 s> 0)
    void* esi_2 = &data_1a9727c
    result = (ecx_8 << 2) + &data_ccea18
    void* result_1 = result
    
    do
        void* eax_10 = sub_571b30(*result, data_b81820)
        int32_t* edi_3
        
        if (*esi_2 == "tbl_names" && *(esi_2 - 4) == arg1 && *(esi_2 + 4) == ebx_1
                && *(esi_2 + 8) == 0)
            edi_3 = *(esi_2 + 0x1c)
            
            if (edi_3 == 0)
                goto label_6290ac
            
            uint32_t eax_11 = zx.d(edi_3.w)
            
            if (eax_11 u>= data_c23bac || *(eax_11 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_3)
                goto label_6290ac
            
            goto label_6290d4
        
    label_6290ac:
        edi_3 = sub_67be20(ebx_1)
        *(esi_2 + 0x1c) = edi_3
        
        if (edi_3 != 0)
            *esi_2 = "tbl_names"
            *(esi_2 - 4) = arg1
            *(esi_2 + 4) = ebx_1
            *(esi_2 + 8) = 0
        label_6290d4:
            uint32_t eax_16 = sub_64e7a0(edi_3)
            sub_5e0df0(
                sub_5e01b0(sub_665db0(eax_16, eax_10 + 0x74, eax_16, 0x3f800000, 0xffffffff, 0), 
                    eax_10, edi_3, nullptr, 0, 0), 
                eax_10, edi_3, nullptr)
            sub_5defb0(edi_3, eax_10)
            uint32_t eax_19 = sub_64e7a0(edi_3)
            sub_665db0(eax_19, &data_be3d98, eax_19, 0x3f800000, 0xffffffff, 0)
            uint32_t eax_20 = sub_64e7a0(edi_3)
            sub_665db0(eax_20, &data_be2890, eax_20, 0x3f800000, 0xffffffff, 0)
            uint32_t eax_21 = sub_64e7a0(edi_3)
            sub_665db0(eax_21, &data_be28fc, eax_21, 0x3f800000, 0xffffffff, 0)
        
        ebx_1 += 1
        result = result_1 + 4
        esi_2 += 0x24
        result_1 = result
    while (ebx_1 s< esi_1)

return result
