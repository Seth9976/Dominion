// 函数: sub_5fb4c0
// 地址: 0x5fb4c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x336c)
__security_cookie
int32_t esi
int32_t var_10 = esi
*(sub_64e7a0(arg1) + 0x18bc) = sub_5fa9f0
int32_t eax_3 = data_8dbf38

if (eax_3 == 2 || eax_3 == 3)
    uint32_t eax_4 = sub_64e7a0(arg1)
    sub_665db0(eax_4, &data_be45a8, eax_4, 0x3f800000, 0xffffffff, 0)

sub_4bbdb0()
void arg_3c
void arg_19cc
memcpy(&arg_19cc, sub_4e49d0(esi, &arg_3c), 0x1990)
int32_t arg_c = arg2
void* ebx_1 = nullptr
int32_t esi_1 = 0
int32_t arg_18 = arg3
int32_t arg_24 = arg4
int32_t arg_30 = arg5
int32_t* i = &arg_c
void** arg_10 = &data_be465c
void** arg_14 = &data_be4698
void** arg_1c = &data_be4674
void** arg_20 = &data_be46a4
void** arg_28 = &data_be4650
void** arg_2c = &data_be468c
void** arg_34 = &data_be4668
void** arg_38 = &data_be4698
int32_t* i_1 = &arg_c

do
    void arg_40
    bool cond:0_1 = *(&arg_40 + esi_1) != "tbl_rules"
    __return_addr.q = *i
    char* var_8 = i[2]
    void arg_44
    void arg_48
    int32_t edi_1
    void arg_5c
    
    if (cond:0_1 || *(&arg_3c + esi_1) != arg1 || *(&arg_44 + esi_1) != ebx_1
        || *(&arg_48 + esi_1) != 0)
    label_5fb633:
        edi_1 = sub_67be20(ebx_1)
        *(&arg_5c + esi_1) = edi_1
        
        if (edi_1 != 0)
            *(&arg_40 + esi_1) = "tbl_rules"
            *(&arg_3c + esi_1) = arg1
            *(&arg_44 + esi_1) = ebx_1
            *(&arg_48 + esi_1) = 0
    else
        edi_1 = *(&arg_5c + esi_1)
        
        if (edi_1 == 0)
            goto label_5fb633
        
        uint32_t eax_12 = zx.d(edi_1.w)
        
        if (eax_12 u>= data_c23bac || *(eax_12 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_1)
            goto label_5fb633
    uint32_t eax_17 = sub_64e7a0(edi_1)
    sub_665db0(eax_17, arg1, eax_17, 0x3f800000, 0xffffffff, 0)
    uint32_t eax_18 = sub_64e7a0(edi_1)
    sub_665db0(eax_18, var_8, eax_18, 0x3f800000, 0xffffffff, 0)
    char* edx_4 = (&data_be46f8)[__return_addr]
    var_8 = edx_4
    void arg_19d0
    void arg_19d4
    int32_t ecx_9
    void arg_19ec
    
    if (*(&arg_19d0 + esi_1) != edx_4 || *(&arg_19cc + esi_1) != edi_1
        || *(&arg_19d4 + esi_1) != 0xffffffff)
    label_5fb6f6:
        ecx_9 = sub_67bd70(edi_1, edx_4)
        *(&arg_19ec + esi_1) = ecx_9
        
        if (ecx_9 != 0)
            *(&arg_19d0 + esi_1) = var_8
            *(&arg_19cc + esi_1) = edi_1
            *(&arg_19d4 + esi_1) = 0xffffffff
    else
        ecx_9 = *(&arg_19ec + esi_1)
        
        if (ecx_9 == 0)
            goto label_5fb6f6
        
        uint32_t eax_20 = zx.d(ecx_9.w)
        
        if (eax_20 u>= data_c23bac || *(eax_20 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_9)
            goto label_5fb6f6
    uint32_t eax_25 = sub_64e7a0(ecx_9)
    sub_665db0(eax_25, &data_be46b0, eax_25, 0x3f800000, 0xffffffff, 0)
    i = &i_1[3]
    ebx_1 += 1
    i_1 = i
    esi_1 += 0x24
while (i != &arg_3c)

CookieCheckFunction(i)
return i
