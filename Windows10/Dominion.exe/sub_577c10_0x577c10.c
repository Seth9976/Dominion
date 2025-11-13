// 函数: sub_577c10
// 地址: 0x577c10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* ebx = arg3
void* var_424 = ebx
void* eax_3 = arg2 * 0x5a30 + ebx
int32_t eax_4 = *(eax_3 + 0x174f4)
*arg4 = eax_4
int32_t eax_5 = sub_583fc0(eax_4, arg2, arg3, 0xa00)
uint32_t eax_6 = sub_576b30(eax_5, arg2, ebx, 0x29, 0, 0, 0)
int32_t ecx_3

if (eax_6 s<= 0)
    ecx_3 = eax_5
else
    ecx_3 = eax_5 + sub_583fc0(eax_6, arg2, ebx, 0x601)

arg4[1] = ecx_3
int32_t var_434 = ecx_3
arg4[2] = *(eax_3 + 0x17500)
int32_t var_414[0x100]
char eax_12
int32_t edx_3
eax_12, edx_3 = sub_5846c0(&var_414, sub_576540(&var_414, arg2, ebx, &var_414), ebx, &var_414, 9, 0)
arg4[3].b = eax_12
char eax_14
int32_t edx_4
eax_14, edx_4 = sub_5846c0(&var_414, edx_3, ebx, &var_414, 0xe, 0)
int32_t var_14
int32_t ecx_7 = var_14
*(arg4 + 0xd) = eax_14
int32_t eax_15 = 0
arg4[0x324] = 0
int32_t var_418_1 = 0

if (ecx_7 s> 0)
    do
        uint32_t esi_1 = var_414[eax_15]
        uint32_t eax_17 = esi_1 & 0x30
        uint32_t eax_20
        
        if (eax_17 != 0)
            void* eax_19
            eax_19, edx_4 = sub_5769e0(eax_17, edx_4, ebx, esi_1)
            eax_20 = *(eax_19 + 0x14)
        else
            void* eax_18
            eax_18, edx_4 = sub_576940(eax_17, edx_4, ebx, esi_1)
            
            if (*(eax_18 + 0x4c) != 3)
                edx_4 = sub_591930()
            
            eax_20 = *(eax_18 + 0x50)
        
        if (eax_20 == 8)
            int32_t ecx_10
            
            if (eax_17 != 0)
                void* eax_22
                eax_22, edx_4 = sub_5769e0(eax_20, edx_4, ebx, esi_1)
                ecx_10 = *(eax_22 + 0x9c)
            else
                void* eax_21
                eax_21, edx_4 = sub_576940(eax_20, edx_4, ebx, esi_1)
                
                if (*(eax_21 + 0x4c) != 3)
                    edx_4 = sub_591930()
                
                ecx_10 = *(eax_21 + 0x54)
            
            arg4[arg4[0x324] + 4] = ecx_10
            arg4[0x324] += 1
        
        ecx_7 = var_14
        eax_15 = var_418_1 + 1
        var_418_1 = eax_15
    while (eax_15 s< ecx_7)

int32_t eax_25 = 0
arg4[0x392] = 0
int32_t var_418_2 = 0

if (ecx_7 s> 0)
    do
        uint32_t esi_3 = var_414[eax_25]
        uint32_t eax_27 = esi_3 & 0x30
        uint32_t eax_30
        
        if (eax_27 != 0)
            void* eax_29
            eax_29, edx_4 = sub_5769e0(eax_27, edx_4, ebx, esi_3)
            eax_30 = *(eax_29 + 0x14)
        else
            void* eax_28
            eax_28, edx_4 = sub_576940(eax_27, edx_4, ebx, esi_3)
            
            if (*(eax_28 + 0x4c) != 3)
                edx_4 = sub_591930()
            
            eax_30 = *(eax_28 + 0x50)
        
        if (eax_30 == 0x2c)
            int16_t eax_33
            
            if (eax_27 != 0)
                void* eax_32
                eax_32, edx_4 = sub_5769e0(eax_30, edx_4, ebx, esi_3)
                eax_33 = (*(eax_32 + 0x9c)).w
            else
                void* eax_31
                eax_31, edx_4 = sub_576940(eax_30, edx_4, ebx, esi_3)
                
                if (*(eax_31 + 0x4c) != 3)
                    edx_4 = sub_591930()
                
                eax_33 = (*(eax_31 + 0x54)).w
            
            arg4[arg4[0x392] + 0x378] = zx.d(eax_33)
            arg4[0x392] += 1
        
        ecx_7 = var_14
        eax_25 = var_418_2 + 1
        var_418_2 = eax_25
    while (eax_25 s< ecx_7)

int32_t eax_37
int32_t edx_5
edx_5:eax_37 = sx.q(*(ebx + 0x19e4))
int32_t eax_38 = divs.dp.d(edx_5:eax_37, *(ebx + 0xd38))
int32_t edx_6 = mods.dp.d(edx_5:eax_37, *(ebx + 0xd38))

if (eax_38 s< 5)
    eax_38 = 0
    int32_t var_418_3 = 0
    
    if (ecx_7 s> 0)
        do
            uint32_t esi_5 = var_414[eax_38]
            uint32_t eax_40 = esi_5 & 0x30
            uint32_t eax_43
            
            if (eax_40 != 0)
                void* eax_42
                eax_42, edx_6 = sub_5769e0(eax_40, edx_6, ebx, esi_5)
                eax_43 = *(eax_42 + 0x14)
            else
                void* eax_41
                eax_41, edx_6 = sub_576940(eax_40, edx_6, ebx, esi_5)
                
                if (*(eax_41 + 0x4c) != 3)
                    edx_6 = sub_591930()
                
                eax_43 = *(eax_41 + 0x50)
            
            if (eax_43 == 0x26)
                int32_t ecx_16
                
                if (eax_40 != 0)
                    void* eax_45
                    eax_45, edx_6 = sub_5769e0(eax_43, edx_6, ebx, esi_5)
                    ecx_16 = *(eax_45 + 0x9c)
                else
                    void* eax_44
                    eax_44, edx_6 = sub_576940(eax_43, edx_6, ebx, esi_5)
                    
                    if (*(eax_44 + 0x4c) != 3)
                        edx_6 = sub_591930()
                    
                    ecx_16 = *(eax_44 + 0x54)
                
                arg4[arg4[0x324] + 4] = ecx_16
                arg4[0x324] += 1
            
            eax_38 = var_418_3 + 1
            var_418_3 = eax_38
        while (eax_38 s< var_14)

arg4[0x325] = 0
int32_t esi_7 = *(ebx + 0x19cc)

if (*(ebx + 0x19a4) s>= 0x100)
    eax_38 = sub_591930()

int32_t edx_7 = *(ebx + 0x19a4)
int32_t ecx_17 = 0

if (edx_7 s> 0)
    eax_38 = ebx + 0x152c8
    
    do
        if (*eax_38 == 0xb07 && *(eax_38 + 4) == esi_7)
            if (ecx_17 != 0xffffffff)
                int32_t ecx_24 = *((ecx_17 << 5) + ebx + 0x152d0)
                
                if (ecx_24 != 0x3f1)
                    if (ecx_24 - 7 u> 0x40)
                        sub_63b870(ecx_24 - 7, &data_801800, 
                            "where >= CW_BOARD_STANDARD_START && where < END_BOARD_PILES", 
                            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x1118, "BoardPileWhat")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    eax_38 = *(ebx + ecx_24 * 0x10 + 0x1524)
                    arg4[0x325] = eax_38
            
            break
        
        ecx_17 += 1
        eax_38 += 0x20
    while (ecx_17 s< edx_7)

int32_t eax_48 = sub_576d20(eax_38, &var_414, ebx, 3)
arg4[0x327] = eax_48
int32_t eax_49 = sub_576d20(eax_48, &var_414, ebx, 2)
arg4[0x326] = eax_49
int32_t eax_50
int32_t edx_11
eax_50, edx_11 = sub_576d20(eax_49, &var_414, ebx, 0x33)
arg4[0x326] += eax_50
int32_t i = 0
arg4[0x35c] = 0
int32_t i_2 = 0

if (*(ebx + 0x19a4) s> 0)
    void* eax_51 = ebx + 0x152d0
    void* var_41c_4 = eax_51
    
    do
        if (*(eax_51 - 8) == 0x1000)
            int32_t esi_8 = *eax_51
            
            if (esi_8 - 1 u<= 0x47)
                if (esi_8 s>= 0x48)
                    edx_11 = sub_591930()
                    i = i_2
                
                int32_t j = *(ebx + esi_8 * 0x10 + 0x1524)
                
                if (j != 0)
                    edx_11 = arg4[0x35c]
                    int32_t ecx_21 = 0
                    
                    if (edx_11 s> 0)
                        void* eax_53 = &arg4[0x328]
                        
                        while (*eax_53 != j)
                            ecx_21 += 1
                            eax_53 += 4
                            
                            if (ecx_21 s>= edx_11)
                                goto label_578063
                    
                    if (edx_11 s<= 0 || ecx_21 == 0xffffffff)
                    label_578063:
                        arg4[0x35c] = edx_11 + 1
                        arg4[edx_11 + 0x328] = j
                        arg4[edx_11 + 0x342] = *(var_41c_4 + 0xc)
                    else
                        arg4[ecx_21 + 0x342] += *(var_41c_4 + 0xc)
                    
                    i = i_2
            
            eax_51 = var_41c_4
        
        i += 1
        eax_51 += 0x20
        i_2 = i
        var_41c_4 = eax_51
    while (i s< *(ebx + 0x19a4))

int32_t eax_57 = 0
int32_t var_41c_5 = 0

if (var_14 s> 0)
    do
        uint32_t esi_10 = var_414[eax_57]
        uint32_t eax_59 = esi_10 & 0x30
        uint32_t eax_65
        
        if (eax_59 != 0)
            void* eax_64
            eax_64, edx_11 = sub_5769e0(eax_59, edx_11, ebx, esi_10)
            eax_65 = *(eax_64 + 0x14)
        else
            void* eax_60
            eax_60, edx_11 = sub_576940(eax_59, edx_11, ebx, esi_10)
            
            if (*(eax_60 + 0x4c) != 3)
                edx_11 = sub_591930()
            
            eax_65 = *(eax_60 + 0x50)
        
        if (eax_65 == 0x20)
            int32_t esi_12
            
            if (eax_59 != 0)
                esi_12 = *(sub_5769e0(eax_65, edx_11, ebx, esi_10) + 0x9c)
            else
                void* eax_66 = sub_576940(eax_65, edx_11, ebx, esi_10)
                
                if (*(eax_66 + 0x4c) != 3)
                    sub_591930()
                
                esi_12 = *(eax_66 + 0x54)
            
            edx_11 = arg4[0x35c]
            uint32_t eax_68 = zx.d(esi_12.w)
            int32_t eax_69 = 0
            int32_t esi_13 = esi_12 s>> 0x10
            
            if (edx_11 s> 0)
                void* ecx_27 = &arg4[0x328]
                
                while (true)
                    ebx = var_424
                    
                    if (*ecx_27 == eax_68)
                        break
                    
                    eax_69 += 1
                    ecx_27 += 4
                    
                    if (eax_69 s>= edx_11)
                        goto label_5781dd
            
            if (edx_11 s<= 0 || eax_69 == 0xffffffff)
            label_5781dd:
                arg4[0x35c] = edx_11 + 1
                arg4[edx_11 + 0x328] = eax_68
                arg4[edx_11 + 0x342] = esi_13
            else
                arg4[eax_69 + 0x342] += esi_13
        
        eax_57 = var_41c_5 + 1
        var_41c_5 = eax_57
    while (eax_57 s< var_14)

arg4[0x377] = 0
uint32_t result = nullptr

while (*(ebx + result + 0xd74) != 0x1147)
    result += 0x3c
    
    if (result s>= 0xf0)
        CookieCheckFunction(result)
        return result

void* esi_15 = result + 0xd78 + ebx

if (result + 0xd78 != neg.d(ebx))
    for (int32_t i_1 = 0; i_1 s< 0xe; )
        int32_t edx_12 = *(esi_15 + (i_1 << 2))
        
        if (edx_12 == 0)
            break
        
        result = arg4[0x377]
        i_1 += 1
        arg4[result + 0x35d] = edx_12
        arg4[0x377] += 1

CookieCheckFunction(result)
return result
