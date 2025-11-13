// 函数: sub_5157e0
// 地址: 0x5157e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_1b4
int32_t eax_1 = __security_cookie ^ &var_1b4
int32_t* edi = data_cca780
void* ebx_2 = &edi[data_cca784 * 0x200]
int32_t var_1a8[0x2]
var_1a8[0] = ebx_2

if (*edi != 0)
    sub_63b870(eax_1, &data_801800, "setup.params.type == CAMPAIGNTYPE_EXPANSION", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x19f3, "MissionPiece_ExpSubtheme")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*(ebx_2 + 0x548) = edi[1]
*(ebx_2 + 0x54c) = sub_5156c0(edi[1])
int32_t* var_1e8
int32_t* var_1b0
int32_t var_1ac

for (int32_t i = 0; i s< 4; i += 1)
    var_1ac = edi[1]
    var_1b0 = 1
    int32_t* var_1e4_1 = &var_1b0
    int32_t* var_1e0_1 = &var_1ac
    var_1e8 = &std::_Func_impl_no_alloc<class <lambda_8de846b85825e3270cdeb52d3d141248>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t** var_1c4_1 = &var_1e8
    int32_t eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_50ad20(&var_1e8, 0, &data_cca794, var_1e8)
    
    if (eax_6 == 0)
        break
    
    sub_50a6a0(eax_6, edx_1, eax_6, 0, 0)

for (int32_t i_1 = 0; i_1 s< 2; i_1 += 1)
    var_1ac = edi[1]
    var_1b0 = 2
    int32_t* var_1e0_2 = &var_1ac
    var_1e8 = &std::_Func_impl_no_alloc<class <lambda_8de846b85825e3270cdeb52d3d141248>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t* var_1e4_2 = &var_1b0
    int32_t** var_1c4_3 = &var_1e8
    int32_t eax_9
    int32_t edx_2
    eax_9, edx_2 = sub_50ad20(&var_1e8, 0, &data_cca794, var_1e8)
    
    if (eax_9 == 0)
        break
    
    sub_50a6a0(eax_9, edx_2, eax_9, 0, 0)

int32_t eax_10 = sub_516ec0(*(var_1a8[0] + 0x54c))
int32_t ecx_4 = data_ccb414
int32_t i_2 = 0
int32_t edi_1 = 0
int32_t* edx_3 = eax_10 + 4
var_1b0 = edx_3
int32_t* ebx_4 = edx_3
int32_t var_1a0[0x65]
var_19c

while (*ebx_4 != 0)
    eax_10 = 0
    
    if (ecx_4 s> 0)
        do
            if (*((eax_10 << 2) + &data_cca794) == edx_3[edi_1])
                eax_10 = *(sub_571b30(*ebx_4, 0x17) + 0x9c) & 0x800
                
                if (eax_10 == 0)
                    eax_10 = *(sub_571b30(*ebx_4, eax_10 + 0x17) + 0x9c) & 0x40
                    
                    if (eax_10 == 0)
                        void* ecx_11
                        
                        if (edi_1 s< 0xa)
                            ecx_11 = eax_10 + 0x32
                        else if (edi_1 s< 0x14)
                            ecx_11 = 0x19
                        else if (edi_1 s>= 0x1e)
                            int32_t ecx_12
                            ecx_12.b = edi_1 s< 0x28
                            ecx_11 = (ecx_12 << 1) + 5
                        else
                            ecx_11 = 0xd
                        
                        eax_10 = *ebx_4
                        var_1a0[i_2 * 2] = ecx_11
                        *(&var_19c + (i_2 << 3)) = eax_10
                        i_2 += 1
                
                ecx_4 = data_ccb414
                break
            
            eax_10 += 1
        while (eax_10 s< ecx_4)
        
        edx_3 = var_1b0
    
    edi_1 += 1
    ebx_4 = &ebx_4[1]
    
    if (edi_1 u>= 0x32)
        break

int32_t ebx_5 = 0

while (i_2 != 0)
    int32_t eax_13
    int32_t edx_7
    eax_13, edx_7 = sub_51e050(eax_10, &var_1a0, &data_cc8de0, i_2)
    
    if (sub_50a6a0(eax_13, edx_7, eax_13, 2, 0) != 0)
        sub_58ffd0(&data_cca794, eax_13)
    
    eax_10 = 0
    
    if (i_2 s> 0)
        do
            int32_t edx_9 = eax_10 << 3
            
            if (*(&var_19c + edx_9) == eax_13)
                eax_10 = (&var_1a8)[i_2][0]
                i_2 -= 1
                int32_t ecx_14 = *(&var_19c + (i_2 << 3))
                var_1a0[eax_10 * 2] = eax_10
                *(&var_19c + edx_9) = ecx_14
                break
            
            eax_10 += 1
        while (eax_10 s< i_2)
    
    ebx_5 += 1
    
    if (ebx_5 s>= 1)
        break

int32_t* ecx_15 = data_cca780
var_1a8[0] = 1

if (*ecx_15 != 0)
    sub_63b870(eax_10, &data_801800, "setup.params.type == CAMPAIGNTYPE_EXPANSION", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x19d0, "RollSubthemeLandscape")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t (* var_1e4_3)[0x2] = &var_1a8
int32_t* var_1e0_3 = ecx_15
var_1e8 = &std::_Func_impl_no_alloc<class <lambda_4bedaaa65377915ef4fd1bf2fa28174a>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_1c4_7 = &var_1e8
uint32_t result
int32_t edx_10
result, edx_10 = sub_50ad20(&var_1e8, 0, &data_cca794, var_1e8)

if (result != 0)
    result = sub_50a6a0(result, edx_10, result, 4, 1)

CookieCheckFunction(result)
return result
