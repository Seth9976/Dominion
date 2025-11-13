// 函数: sub_6342f0
// 地址: 0x6342f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* ebx = arg3
int32_t* var_f0 = ebx
int32_t eax_2 = sub_5cf7e0()
void* eax_3 = sub_571b30(*(arg2 + 8), eax_2)
uint32_t eax_4 = sub_64e7a0(ebx)
sub_5e0df0(
    sub_5e01b0(sub_665db0(eax_4, eax_3 + 0x74, eax_4, 0x3f800000, 0xffffffff, 0), eax_3, ebx, 
        nullptr, 3, 0), 
    eax_3, ebx, 3)
sub_5defb0(ebx, eax_3)
uint32_t eax_7 = sub_64e7a0(ebx)
sub_665db0(eax_7, &data_be3220, eax_7, 0x3f800000, 0xffffffff, 0)
sub_4d3b70(ebx)
TEB* fsbase

if (data_1a98ec8 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a98ec8)
    
    if (data_1a98ec8 == 0xffffffff)
        data_1a98ed0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        sub_4acb80(&data_1a98ed0, "players_0")
        data_1a98edc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        sub_4acb80(&data_1a98edc, "players_1")
        data_1a98ee8 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        sub_4acb80(&data_1a98ee8, "players_2")
        data_1a98ef4 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        sub_4acb80(&data_1a98ef4, "players_3")
        data_1a98f00 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        sub_4acb80(&data_1a98f00, "players_4")
        data_1a98f0c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        sub_4acb80(&data_1a98f0c, "players_5")
        data_1a98f18 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        ebx = sub_4acb80(&data_1a98f18, "players_6")
        __Init_thread_footer(&data_1a98ec8)

uint32_t eax_10 = sub_64e7a0(ebx)
void* eax_11 = sub_665db0(eax_10, &(&data_1a98ed0)[arg4 * 3], eax_10, 0x3f800000, 0xffffffff, 0)

if (*(arg2 + 0xc) != 0)
    uint32_t eax_12 = sub_64e7a0(ebx)
    eax_11 = sub_665db0(eax_12, &data_bf1678, eax_12, 0x3f800000, 0xffffffff, 0)

int32_t edi_1

if (arg4 != 3)
    edi_1 = 2

if (arg4 == 3 || arg4 s> 4)
    edi_1 = 3

int32_t var_10c = 0xffffffff
sub_666120(eax_11, &data_bf1750, ebx, edi_1)
int32_t temp0 = divs.dp.d(sx.q(arg4 + 1), edi_1)
int32_t var_114 = 0xffffffff
int32_t var_11c = 0xffffffff
sub_666120(sub_666120(temp0, &data_bf175c, ebx, temp0), &data_bf1744, ebx, arg4)
void var_e8
void* result = memset(&var_e8, 0, 0xd8)
void* ebx_1 = nullptr

if (arg4 s> 0)
    void var_e4
    void* esi_2 = &var_e4
    int32_t* var_ec_1 = arg2 + 0x10
    
    do
        int32_t* edi_2
        
        if (*esi_2 == "tbl_pile" && *(esi_2 - 4) == var_f0 && *(esi_2 + 4) == ebx_1
                && *(esi_2 + 8) == 0)
            edi_2 = *(esi_2 + 0x1c)
            
            if (edi_2 == 0)
                goto label_6345af
            
            uint32_t eax_19 = zx.d(edi_2.w)
            
            if (eax_19 u>= data_c23bac || *(eax_19 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_2)
                goto label_6345af
            
            goto label_6345dc
        
    label_6345af:
        edi_2 = sub_67be20(ebx_1)
        *(esi_2 + 0x1c) = edi_2
        
        if (edi_2 != 0)
            *esi_2 = "tbl_pile"
            *(esi_2 - 4) = var_f0
            *(esi_2 + 4) = ebx_1
            *(esi_2 + 8) = 0
        label_6345dc:
            sub_5d8950(edi_2, ebx_1)
            int32_t ecx_20 = 0
            int32_t edx_9 = *(eax_3 + 0x98)
            
            if ((edx_9 & 0x20000000) != 0 && *(eax_3 + 0x8c) != 0xc3d)
                ecx_20 = 1
            
            if (((edx_9 & 0x8000000) | (*(eax_3 + 0x9c) & 0x800)) != 0)
                ecx_20 = 2
            
            if (*(eax_3 + 0x8c) == 0x104b)
                ecx_20 = 1
            
            int32_t var_10c_2 = ecx_20
            sub_633ba0(edi_2, *var_ec_1)
        
        var_ec_1 = &var_ec_1[1]
        ebx_1 += 1
        esi_2 += 0x24
    while (ebx_1 s< arg4)
    
    char** esi_3 = &var_e4
    void* ebx_2 = nullptr
    void* var_ec_2 = arg2 + 0x28
    
    do
        void* result_1
        
        if (*esi_3 == "tbl_open" && esi_3[-1] == var_f0 && esi_3[1] == ebx_2 && esi_3[2] == 0)
            result_1 = esi_3[7]
            
            if (result_1 == 0)
                goto label_6346da
            
            uint32_t eax_35 = zx.d(result_1.w)
            
            if (eax_35 u>= data_c23bac || *(eax_35 * 0x18d0 + data_c23ba8 + 0x18c8) != result_1)
                goto label_6346da
            
            goto label_63470c
        
    label_6346da:
        result = sub_67be20(ebx_2)
        result_1 = result
        esi_3[7] = result_1
        
        if (result_1 != 0)
            *esi_3 = "tbl_open"
            esi_3[-1] = var_f0
            esi_3[1] = ebx_2
            esi_3[2] = 0
        label_63470c:
            sub_5d8950(result_1, ebx_2)
            result = *var_ec_2
            
            if (result s> 0)
                uint32_t eax_39 = sub_64e7a0(result_1)
                sub_665db0(eax_39, &data_bf1774, eax_39, 0x3f800000, 0xffffffff, 0)
            
            if (result s> 1)
                uint32_t eax_40 = sub_64e7a0(result_1)
                result = sub_665db0(eax_40, &data_bf1780, eax_40, 0x3f800000, 0xffffffff, 0)
        
        var_ec_2 += 4
        ebx_2 += 1
        esi_3 = &esi_3[9]
    while (ebx_2 s< arg4)

CookieCheckFunction(result)
return result
