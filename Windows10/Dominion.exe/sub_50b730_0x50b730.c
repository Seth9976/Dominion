// 函数: sub_50b730
// 地址: 0x50b730
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t edx = arg1
int32_t ecx = data_cca788
uint32_t var_1c = edx
int32_t var_3c
char const* const var_38_1
int32_t eax_4
char* ecx_4

if (ecx == 0)
    int32_t i_1 = 0
    int32_t edi_1 = 0
    int32_t* eax_8 = data_cca780 + 0x34 + (data_cca784 << 0xb)
    int32_t i_2 = 0
    int32_t* var_20_1 = eax_8
    int32_t var_18[0x4]
    int32_t i
    
    do
        int32_t esi_1 = *eax_8
        
        if (esi_1 == 0)
            break
        
        i_1 += 1
        
        if (edx(esi_1) != 0)
            var_18[edi_1] = esi_1
            edi_1 += 1
        
        i = i_2 + 1
        eax_8 = &var_20_1[0xf]
        i_2 = i
        var_20_1 = eax_8
        edx = var_1c
    while (i s< 4)
    
    if (edi_1 == 0 || edi_1 s< 1)
        while (i_1 s< 4)
            uint32_t var_58_1 = edx
            int32_t* var_5c = &std::_Func_impl_no_alloc<class <lambda_031bca28cdfc4396d758f91151b5c9f1>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
            int32_t** var_38_3 = &var_5c
            int32_t eax_12
            int32_t edx_2
            eax_12, edx_2 = sub_50ad20(&var_5c, 0, &data_cca794, var_5c)
            eax_8 = sub_50a6a0(eax_12, edx_2, eax_12, 4, 0)
            edx = var_1c
            var_18[edi_1] = eax_12
            i_1 += 1
            edi_1 += 1
            
            if (edi_1 s>= 1)
                break
    
    int32_t esi_3 = 1
    
    if (edi_1 s< 1)
        esi_3 = edi_1
    
    sub_63eda0(eax_8, &var_18, &data_cc8de0, edi_1, esi_3)
    eax_4 = memcpy(&var_1c, &var_18, esi_3 << 2)
    
    if (esi_3 == 1)
        uint32_t eax_14 = var_1c
        CookieCheckFunction(eax_14)
        return eax_14
    
    var_38_1 = "CampaignContextFavoredLandscapeOrRandomOrAdd"
    var_3c = 0x70c
    ecx_4 = "numAvailable == 1"
else
    void* eax_2 = sub_571b30(ecx, 0x18)
    eax_4 = *(eax_2 + 0x9c) & 0x940
    
    if (((*(eax_2 + 0x98) & 0x7f000400) | eax_4) != 0)
        uint32_t eax_5 = data_cca788
        CookieCheckFunction(eax_5)
        return eax_5
    
    var_38_1 = "CampaignContextFavoredLandscapeOrRandomOrAdd"
    var_3c = 0x6e1
    ecx_4 = "IsLandscape(gCampaignSetup.favoredPile)"

sub_63b870(eax_4, &data_801800, ecx_4, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_3c, var_38_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
