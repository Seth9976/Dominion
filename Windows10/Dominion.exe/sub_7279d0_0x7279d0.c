// 函数: sub_7279d0
// 地址: 0x7279d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = __chkstk(0x1438)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
char var_1401 = 0
uint32_t _Size_1 = 0
int32_t* esi = *ecx
uint32_t var_1434 = 0
int32_t var_1420 = 0
ecx[2] = 0
ecx[1] = 0
ecx[3] = 0
char var_1402 = 0
int32_t var_1414 = 0
uint32_t _Size_7 = 0
uint32_t var_1430 = 0
int32_t var_141c = 1

if (sub_726640(esi) != 0)
    void* (* const var_1438_1)(void* _Block, uint32_t _Size) = realloc
    
    while (true)
        uint32_t _Size_4 = (sub_7202a0(esi) << 0x10) + sub_7202a0(esi)
        uint32_t ecx_6 = (sub_7202a0(esi) << 0x10) + sub_7202a0(esi)
        uint32_t _Size
        char var_1424
        char var_418[0x3f4]
        var_416
        var_415
        
        if (ecx_6 u> 0x49484452)
            if (ecx_6 == 0x504c5445)
                if (var_141c != 0)
                    break
                
                if (_Size_4 u> 0x300)
                    break
                
                uint32_t edi_28 = _Size_4 u/ 3
                var_1430 = edi_28
                
                if (edi_28 * 3 != _Size_4)
                    break
                
                int32_t edx_18 = 0
                int32_t var_1410_3 = 0
                
                if (edi_28 != 0)
                    void* ebx_7 = &esi[0x2a]
                    
                    do
                        char* eax_78 = *ebx_7
                        void* ecx_54 = esi[0x2b]
                        void* ebx_8
                        
                        if (eax_78 u>= ecx_54)
                            if (esi[8] != 0)
                                _Size = esi[9]
                                int32_t eax_80
                                eax_80, edx_18 = esi[4](esi[7], &esi[0xa], _Size, arg2, arg1)
                                
                                if (eax_80 != 0)
                                    ecx_54 = &esi[0xa] + eax_80
                                    esi[0x2b] = ecx_54
                                else
                                    ecx_54 = esi + 0x29
                                    esi[8] = eax_80
                                    esi[0x2b] = ecx_54
                                    esi[0xa].b = eax_80.b
                                
                                edx_18.b = esi[0xa].b
                                eax_78 = esi + 0x29
                                goto label_72836f
                            
                            ebx_8 = &var_418[edx_18 << 2]
                            *ebx_8 = 0
                        label_72839e:
                            
                            if (esi[8] == 0)
                                edx_18.b = 0
                            else
                                _Size = esi[9]
                                int32_t eax_82
                                eax_82, edx_18 = esi[4](esi[7], &esi[0xa], _Size, arg2, arg1)
                                
                                if (eax_82 != 0)
                                    ecx_54 = &esi[0xa] + eax_82
                                    eax_78 = esi + 0x29
                                    esi[0x2b] = ecx_54
                                    edx_18.b = esi[0xa].b
                                    esi[0x2a] = eax_78
                                else
                                    ecx_54 = esi + 0x29
                                    esi[8] = eax_82
                                    esi[0x2b] = ecx_54
                                    edx_18.b = eax_82.b
                                    esi[0xa].b = eax_82.b
                                    eax_78 = esi + 0x29
                                    esi[0x2a] = eax_78
                        else
                            edx_18.b = *eax_78
                            eax_78 = &eax_78[1]
                        label_72836f:
                            *ebx_7 = eax_78
                            var_418[var_1410_3 << 2] = edx_18.b
                            ebx_8 = &var_418[var_1410_3 << 2]
                            
                            if (eax_78 u>= ecx_54)
                                goto label_72839e
                            
                            edx_18.b = *eax_78
                            eax_78 = &eax_78[1]
                            esi[0x2a] = eax_78
                        
                        *(ebx_8 + 1) = edx_18.b
                        
                        if (eax_78 u< ecx_54)
                            ecx_54.b = *eax_78
                            ebx_7 = &esi[0x2a]
                            *ebx_7 = &eax_78[1]
                        else if (esi[8] == 0)
                            ecx_54.b = 0
                            ebx_7 = &esi[0x2a]
                        else
                            _Size = esi[9]
                            void* eax_85
                            eax_85, ecx_54 = esi[4](esi[7], &esi[0xa], _Size, arg2, arg1)
                            
                            if (eax_85 != 0)
                                ebx_7 = &esi[0x2a]
                                esi[0x2b] = eax_85 + 0x28 + esi
                                ecx_54.b = esi[0xa].b
                                *ebx_7 = esi + 0x29
                            else
                                esi[8] = eax_85
                                ebx_7 = &esi[0x2a]
                                esi[0x2b] = esi + 0x29
                                esi[0xa].b = 0
                                ecx_54.b = esi[0xa].b
                                *ebx_7 = esi + 0x29
                        
                        *(&var_416 + (var_1410_3 << 2)) = ecx_54.b
                        *(&var_415 + (var_1410_3 << 2)) = 0xff
                        edx_18 = var_1410_3 + 1
                        var_1410_3 = edx_18
                    while (edx_18 u< var_1430)
                
            label_728489:
                sub_7202a0(esi)
                sub_7202a0(esi)
                continue
            else if (ecx_6 == 0x74524e53)
                if (var_141c != 0)
                    break
                
                int32_t* edx_15 = ecx
                
                if (edx_15[1] != 0)
                    break
                
                if (var_1401 == 0)
                    int32_t ecx_46 = esi[2]
                    
                    if ((ecx_46.b & 1) == 0)
                        break
                    
                    if (_Size_4 != ecx_46 * 2)
                        break
                    
                    int32_t i = 0
                    var_1402 = 1
                    
                    if (edx_15[4] != 0x10)
                        if (ecx_46 s> 0)
                            do
                                _Size_4.b = *(edx_15[4] + 0x800cbc)
                                edx_15 = ecx
                                (&var_1424)[i] = sub_7202a0(esi) * _Size_4.b
                                i += 1
                            while (i s< esi[2])
                            
                            sub_7202a0(esi)
                            sub_7202a0(esi)
                            continue
                    else if (ecx_46 s> 0)
                        do
                            *(&_Size + (i << 1)) = sub_7202a0(esi)
                            i += 1
                        while (i s< esi[2])
                        
                        sub_7202a0(esi)
                        sub_7202a0(esi)
                        continue
                else
                    if (var_1430 == 0)
                        break
                    
                    if (_Size_4 u> var_1430)
                        break
                    
                    int32_t edx_16 = 0
                    var_1401 = 4
                    int32_t var_1410_2 = 0
                    
                    if (_Size_4 != 0)
                        do
                            char* eax_61 = esi[0x2a]
                            
                            if (eax_61 u< esi[0x2b])
                                ecx_6.b = *eax_61
                                esi[0x2a] = &eax_61[1]
                            else if (esi[8] == 0)
                                ecx_6.b = 0
                            else
                                _Size = esi[9]
                                void* eax_64
                                eax_64, ecx_6 = esi[4](esi[7], &esi[0xa], _Size, arg2, arg1)
                                
                                if (eax_64 != 0)
                                    edx_16 = var_1410_2
                                    esi[0x2b] = eax_64 + 0x28 + esi
                                    ecx_6.b = esi[0xa].b
                                    esi[0x2a] = esi + 0x29
                                else
                                    edx_16 = var_1410_2
                                    esi[8] = eax_64
                                    esi[0x2b] = esi + 0x29
                                    esi[0xa].b = 0
                                    ecx_6.b = esi[0xa].b
                                    esi[0x2a] = esi + 0x29
                            
                            *(&var_415 + (edx_16 << 2)) = ecx_6.b
                            edx_16 += 1
                            var_1410_2 = edx_16
                        while (edx_16 u< _Size_4)
                        
                        sub_7202a0(esi)
                        sub_7202a0(esi)
                        continue
                
                goto label_728489
            
        label_72809c:
            
            if (var_141c != 0)
                break
            
            if ((ecx_6 & 0x20000000) == 0)
                (*"X PNG chunk not known")[0] = ecx_6.b
                (*"XXXX PNG chunk not known")[0] = (ecx_6 u>> 0x18).b
                (*"XXX PNG chunk not known")[0] = (ecx_6 u>> 0x10).b
                (*"XX PNG chunk not known")[0] = (ecx_6 u>> 8).b
                break
            
            if (_Size_4 s< 0)
                esi[0x2a] = esi[0x2b]
                sub_7202a0(esi)
                sub_7202a0(esi)
                continue
        else if (ecx_6 == 0x49484452)
            if (var_141c == 0)
                break
            
            var_141c = 0
            
            if (_Size_4 != 0xd)
                break
            
            uint32_t eax_19 = sub_7202a0(esi)
            uint32_t eax_21 = sub_7202a0(esi) + (eax_19 << 0x10)
            *esi = eax_21
            
            if (eax_21 u> &data_1000000)
                break
            
            uint32_t eax_22 = sub_7202a0(esi)
            uint32_t eax_24 = sub_7202a0(esi) + (eax_22 << 0x10)
            esi[1] = eax_24
            
            if (eax_24 u> &data_1000000)
                break
            
            char* eax_25 = esi[0x2a]
            char ecx_24
            
            if (eax_25 u< esi[0x2b])
                ecx_24 = *eax_25
                esi[0x2a] = &eax_25[1]
            else if (esi[8] == 0)
                ecx_24 = 0
            else
                _Size = esi[9]
                void* eax_28 = esi[4](esi[7], &esi[0xa], _Size, arg2, arg1)
                
                if (eax_28 != 0)
                    esi[0x2b] = eax_28 + 0x28 + esi
                    ecx_24 = esi[0xa].b
                    esi[0x2a] = esi + 0x29
                else
                    esi[8] = eax_28
                    esi[0x2b] = esi + 0x29
                    esi[0xa].b = 0
                    ecx_24 = esi[0xa].b
                    esi[0x2a] = esi + 0x29
            
            uint32_t eax_34 = zx.d(ecx_24)
            ecx[4] = eax_34
            
            if (eax_34 != 1 && eax_34 != 2 && eax_34 != 4 && eax_34 != 8 && eax_34 != 0x10)
                break
            
            char* ecx_25 = esi[0x2a]
            void* eax_35 = esi[0x2b]
            char edx_6
            
            if (ecx_25 u< eax_35)
                edx_6 = *ecx_25
                ecx_25 = &ecx_25[1]
                esi[0x2a] = ecx_25
            else if (esi[8] == 0)
                edx_6 = 0
            else
                _Size = esi[9]
                void* eax_37 = esi[4](esi[7], &esi[0xa], _Size, arg2, arg1)
                
                if (eax_37 != 0)
                    ecx_25 = esi + 0x29
                    eax_35 = eax_37 + 0x28 + esi
                    esi[0x2b] = eax_35
                    edx_6 = esi[0xa].b
                    esi[0x2a] = ecx_25
                else
                    esi[8] = eax_37
                    ecx_25 = esi + 0x29
                    eax_35 = esi + 0x29
                    esi[0x2b] = eax_35
                    esi[0xa].b = 0
                    edx_6 = esi[0xa].b
                    esi[0x2a] = ecx_25
            
            uint32_t edx_7 = zx.d(edx_6)
            var_1434 = edx_7
            
            if (edx_7 u> 6)
                break
            
            int32_t* ebx_5
            
            if (edx_7 != 3)
                if ((edx_7.b & 1) != 0)
                    break
                
                ebx_5.b = var_1401
            else
                if (ecx[4] == 0x10)
                    break
                
                ebx_5.b = edx_7.b
                var_1401 = ebx_5.b
            
            void* ecx_26
            
            if (ecx_25 u>= eax_35)
                if (esi[8] != 0)
                    _Size = esi[9]
                    void* eax_40
                    eax_40, edx_7 = esi[4](esi[7], &esi[0xa], _Size, arg2, arg1)
                    
                    if (eax_40 != 0)
                        eax_35 = eax_40 + 0x28 + esi
                        esi[0x2b] = eax_35
                    else
                        esi[8] = eax_40
                        eax_35 = esi + 0x29
                        esi[0x2b] = eax_35
                        esi[0xa].b = 0
                    
                    edx_7.b = esi[0xa].b
                    ecx_26 = esi + 0x29
                    goto label_727f28
                
                edx_7.b = 0
            else
                edx_7.b = *ecx_25
                ecx_26 = &ecx_25[1]
            label_727f28:
                esi[0x2a] = ecx_26
                
                if (edx_7.b != 0)
                    break
                
                void* ecx_27
                
                if (ecx_26 u>= eax_35)
                    if (esi[8] != 0)
                        _Size = esi[9]
                        void* eax_43
                        eax_43, edx_7 = esi[4](esi[7], &esi[0xa], _Size, arg2, arg1)
                        
                        if (eax_43 != 0)
                            eax_35 = eax_43 + 0x28 + esi
                            esi[0x2b] = eax_35
                        else
                            esi[8] = eax_43
                            eax_35 = esi + 0x29
                            esi[0x2b] = eax_35
                            esi[0xa].b = 0
                        
                        edx_7.b = esi[0xa].b
                        ecx_27 = esi + 0x29
                        goto label_727f82
                    
                    edx_7.b = 0
                else
                    edx_7.b = *ecx_26
                    ecx_27 = ecx_26 + 1
                label_727f82:
                    esi[0x2a] = ecx_27
                    
                    if (edx_7.b != 0)
                        break
                    
                    if (ecx_27 u< eax_35)
                        edx_7.b = *ecx_27
                        esi[0x2a] = ecx_27 + 1
                    else if (esi[8] == 0)
                        edx_7.b = 0
                    else
                        _Size = esi[9]
                        void* eax_47
                        eax_47, edx_7 = esi[4](esi[7], &esi[0xa], _Size, arg2, arg1)
                        
                        if (eax_47 != 0)
                            esi[0x2b] = eax_47 + 0x28 + esi
                            edx_7.b = esi[0xa].b
                            esi[0x2a] = esi + 0x29
                        else
                            esi[8] = eax_47
                            esi[0x2b] = esi + 0x29
                            esi[0xa].b = 0
                            edx_7.b = esi[0xa].b
                            esi[0x2a] = esi + 0x29
            uint32_t _Size_8 = zx.d(edx_7.b)
            _Size_1 = _Size_8
            
            if (_Size_8 u> 1)
                break
            
            int32_t ecx_28 = *esi
            
            if (ecx_28 == 0)
                break
            
            int32_t edi_24 = esi[1]
            
            if (edi_24 == 0)
                break
            
            uint32_t temp0_1 = divu.dp.d(0:0x40000000, ecx_28)
            
            if (ebx_5.b != 0)
                esi[2] = 1
                
                if (temp0_1 u>> 2 u< edi_24)
                    break
                
                sub_7202a0(esi)
                sub_7202a0(esi)
                continue
            else
                int32_t ecx_32 = ((var_1434 & 2) | 1) + (var_1434 u>> 2 & 1)
                esi[2] = ecx_32
                
                if (divu.dp.d(0:temp0_1, ecx_32) u< edi_24)
                    break
                
                sub_7202a0(esi)
                sub_7202a0(esi)
                continue
        else
            if (ecx_6 != 0x43674249)
                if (ecx_6 == 0x49444154)
                    if (var_141c != 0)
                        break
                    
                    if (var_1401 != 0 && var_1430 == 0)
                        break
                    
                    int32_t eax_16 = _Size_4 + var_1414
                    
                    if (eax_16 s< var_1414)
                        break
                    
                    uint32_t _Size_3 = _Size_7
                    int32_t* edi_10
                    
                    if (eax_16 u<= _Size_3)
                        edi_10 = ecx
                    else
                        if (_Size_3 != 0)
                        label_727ca4:
                            
                            do
                                _Size_3 *= 2
                            while (eax_16 u> _Size_3)
                            
                            _Size_7 = _Size_3
                        else
                            _Size_3 = 0x1000
                            
                            if (_Size_4 u> 0x1000)
                                _Size_3 = _Size_4
                            
                            _Size_7 = _Size_3
                            
                            if (eax_16 u> _Size_3)
                                goto label_727ca4
                        
                        edi_10 = ecx
                        _Size = _Size_3
                        eax_16 = realloc(edi_10[1], _Size)
                        
                        if (eax_16 == 0)
                            break
                        
                        edi_10[1] = eax_16
                    
                    int32_t edx_5 = edi_10[1] + var_1414
                    _Size = _Size_4
                    
                    if (sub_720200(eax_16, edx_5, esi, _Size) == 0)
                        break
                    
                    var_1414 += _Size_4
                    sub_7202a0(esi)
                    sub_7202a0(esi)
                    continue
                else if (ecx_6 == 0x49454e44)
                    if (var_141c == 0)
                        int32_t ebx_3 = ecx[1]
                        
                        if (ebx_3 != 0)
                            void* (* const var_1428)(uint32_t _Size) = malloc
                            uint32_t _Size_5 = (((ecx[4] * *esi + 7) u>> 3) * esi[2] + 1) * esi[1]
                            _Size = _Size_5
                            uint32_t _Size_2 = malloc(_Size)
                            
                            if (_Size_2 == 0)
                                goto label_7287b4
                            
                            int32_t var_13fc_1 = var_1414 + ebx_3
                            int32_t edx_1
                            edx_1.b = var_1420 == 0
                            int32_t var_1400 = ebx_3
                            uint32_t var_13e8_1 = _Size_2 + _Size_5
                            int32_t var_13e4_1 = 1
                            
                            if (sub_726520(&var_1400, edx_1) == 0)
                                _Size = _Size_2
                                free(_Size)
                            label_7287b4:
                                ecx[2] = 0
                                CookieCheckFunction(0)
                                return 0
                            
                            int32_t* ebx_4 = ecx
                            ebx_4[2] = _Size_2
                            
                            if (_Size_2 != 0)
                                _Size = ebx_4[1]
                                void (* const var_1410_1)(void* _Block) = free
                                free(_Size)
                                ebx_4[1] = 0
                                int32_t ecx_9 = esi[2]
                                int32_t eax_14 = ecx_9 + 1
                                
                                if ((eax_14 != 0 || var_1401 != eax_14.b) && var_1402 == 0)
                                    eax_14 = ecx_9
                                
                                _Size = _Size_1
                                esi[3] = eax_14
                                int32_t* eax_15
                                int16_t* ecx_13
                                eax_15, ecx_13 = sub_7276f0(eax_14, ebx_4[2], ebx_4, 0, eax_14, 
                                    ebx_4[4], var_1434, _Size)
                                
                                if (eax_15 != 0)
                                    if (var_1402 != 0)
                                        eax_15 = *ebx_4
                                        ecx_13 = ebx_4[3]
                                        int32_t i_8 = eax_15[1] * *eax_15
                                        
                                        if (ebx_4[4] != 0x10)
                                            if (i_8 != 0)
                                                if (esi[3] != 2)
                                                    char var_1422
                                                    eax_15.b = var_1422
                                                    char var_1423
                                                    ebx_4.b = var_1423
                                                    eax_15:1.b = var_1424
                                                    int32_t i_1
                                                    
                                                    do
                                                        if (*ecx_13 == eax_15:1.b
                                                                && *(ecx_13 + 1) == ebx_4.b
                                                                && ecx_13[1].b == eax_15.b)
                                                            *(ecx_13 + 3) = 0
                                                        
                                                        ecx_13 = &ecx_13[2]
                                                        i_1 = i_8
                                                        i_8 -= 1
                                                    while (i_1 != 1)
                                                else
                                                    ebx_4.b = var_1424
                                                    int32_t i_2
                                                    
                                                    do
                                                        bool cond:3_1 = *ecx_13 == ebx_4.b
                                                        ecx_13 = &ecx_13[1]
                                                        eax_15.b = cond:3_1
                                                        eax_15.b -= 1
                                                        *(ecx_13 - 1) = eax_15.b
                                                        i_2 = i_8
                                                        i_8 -= 1
                                                    while (i_2 != 1)
                                                
                                                ebx_4 = ecx
                                        else if (i_8 != 0)
                                            if (esi[3] != 2)
                                                eax_15.w = arg2.w
                                                uint16_t _Size_6 = _Size.w
                                                ebx_4.w = _Size.w
                                                int32_t i_3
                                                
                                                do
                                                    if (*ecx_13 == ebx_4.w && ecx_13[1] == _Size_6
                                                            && ecx_13[2] == eax_15.w)
                                                        ecx_13[3] = 0
                                                    
                                                    ecx_13 = &ecx_13[4]
                                                    i_3 = i_8
                                                    i_8 -= 1
                                                while (i_3 != 1)
                                                ebx_4 = ecx
                                            else
                                                uint32_t edi_9
                                                edi_9.w = _Size.w
                                                int32_t i_4
                                                
                                                do
                                                    bool cond:4_1 = *ecx_13 == edi_9.w
                                                    ecx_13 = &ecx_13[2]
                                                    eax_15 = 0xffff
                                                    
                                                    if (cond:4_1)
                                                        eax_15 = nullptr
                                                    
                                                    ecx_13[-1] = eax_15.w
                                                    i_4 = i_8
                                                    i_8 -= 1
                                                while (i_4 != 1)
                                    
                                    int32_t* edi_34
                                    
                                    if (var_1420 == 0 || data_147dedc == 0)
                                        edi_34 = ecx
                                    else
                                        edi_34 = ecx
                                        
                                        if (esi[3] s> 2)
                                            eax_15 = *ebx_4
                                            char* edx_20 = edi_34[3]
                                            char* var_1420_1 = edx_20
                                            int32_t i_9 = eax_15[1] * *eax_15
                                            int32_t i_10 = i_9
                                            
                                            if (i_9 != 0)
                                                if (eax_15[3] == 3)
                                                    int32_t i_5
                                                    
                                                    do
                                                        ecx_13.b = *edx_20
                                                        edx_20 = &edx_20[3]
                                                        eax_15.b = edx_20[0xffffffff]
                                                        edx_20[0xfffffffd] = eax_15.b
                                                        edx_20[0xffffffff] = ecx_13.b
                                                        i_5 = i_9
                                                        i_9 -= 1
                                                    while (i_5 != 1)
                                                else if (data_147dee0 == 0)
                                                    int32_t i_6
                                                    
                                                    do
                                                        ecx_13.b = *edx_20
                                                        edx_20 = &edx_20[4]
                                                        eax_15.b = edx_20[0xfffffffe]
                                                        edx_20[0xfffffffc] = eax_15.b
                                                        edx_20[0xfffffffe] = ecx_13.b
                                                        i_6 = i_9
                                                        i_9 -= 1
                                                    while (i_6 != 1)
                                                else
                                                    int32_t i_7
                                                    
                                                    do
                                                        eax_15:1.b = edx_20[3]
                                                        eax_15.b = *edx_20
                                                        ecx_13.b = edx_20[2]
                                                        char var_1409_1 = eax_15.b
                                                        char var_1415_1 = ecx_13.b
                                                        
                                                        if (eax_15:1.b != 0)
                                                            uint32_t ebx_10 = zx.d(eax_15:1.b)
                                                            uint32_t edi_36 = ebx_10 u>> 1
                                                            var_1420_1[1] = (divu.dp.d(
                                                                0:(zx.d(edx_20[1]) * 0xff + edi_36), 
                                                                ebx_10)).b
                                                            edx_20 = var_1420_1
                                                            i_9 = i_10
                                                            ecx_13.b = divu.dp.d(
                                                                0:(zx.d(var_1415_1) * 0xff + edi_36), 
                                                                ebx_10).b
                                                            eax_15.b = (divu.dp.d(
                                                                0:(zx.d(var_1409_1) * 0xff + edi_36), 
                                                                ebx_10)).b
                                                        
                                                        *edx_20 = ecx_13.b
                                                        edx_20[2] = eax_15.b
                                                        edx_20 = &edx_20[4]
                                                        i_7 = i_9
                                                        i_9 -= 1
                                                        var_1420_1 = edx_20
                                                        i_10 = i_9
                                                    while (i_7 != 1)
                                                    edi_34 = ecx
                                    
                                    eax_15.b = var_1401
                                    void (* const esi_2)(void* _Block)
                                    
                                    if (eax_15.b == 0)
                                        if (var_1402 != 0)
                                            esi[2] += 1
                                        
                                        esi_2 = var_1410_1
                                        goto label_72877a
                                    
                                    uint32_t ecx_60 = zx.d(eax_15.b)
                                    esi[2] = ecx_60
                                    esi[3] = ecx_60
                                    int32_t* eax_101 = *edi_34
                                    int32_t edi_38 = eax_101[1] * *eax_101
                                    void* ebx_11 = ecx[3]
                                    
                                    if (edi_38 s>= 0 && edi_38 s<= divu.dp.d(0:0x7fffffff, ecx_60))
                                        _Size = edi_38 * ecx_60
                                        void* eax_107 = malloc(_Size)
                                        
                                        if (eax_107 != 0)
                                            int32_t esi_1 = 0
                                            void* var_1414_1 = eax_107
                                            var_417
                                            
                                            if (ecx_60 != 3)
                                                if (edi_38 != 0)
                                                    void* edx_27 = eax_107 + 2
                                                    var_1414_1 = eax_107
                                                    
                                                    do
                                                        uint32_t ecx_62 = zx.d(*(ebx_11 + esi_1))
                                                        edx_27 += 4
                                                        esi_1 += 1
                                                        eax_107.b = var_418[ecx_62 << 2]
                                                        *(edx_27 - 6) = eax_107.b
                                                        eax_107.b = *(&var_417 + (ecx_62 << 2))
                                                        *(edx_27 - 5) = eax_107.b
                                                        eax_107.b = *(&var_416 + (ecx_62 << 2))
                                                        *(edx_27 - 4) = eax_107.b
                                                        eax_107.b = *(&var_415 + (ecx_62 << 2))
                                                        *(edx_27 - 3) = eax_107.b
                                                    while (esi_1 u< edi_38)
                                            else if (edi_38 != 0)
                                                void* edx_26 = eax_107 + 2
                                                var_1414_1 = eax_107
                                                
                                                do
                                                    uint32_t ecx_61 = zx.d(*(ebx_11 + esi_1))
                                                    edx_26 += 3
                                                    esi_1 += 1
                                                    eax_107.b = var_418[ecx_61 << 2]
                                                    *(edx_26 - 5) = eax_107.b
                                                    eax_107.b = *(&var_417 + (ecx_61 << 2))
                                                    *(edx_26 - 4) = eax_107.b
                                                    eax_107.b = *(&var_416 + (ecx_61 << 2))
                                                    *(edx_26 - 3) = eax_107.b
                                                while (esi_1 u< edi_38)
                                            edi_34 = ecx
                                            esi_2 = var_1410_1
                                            _Size = edi_34[3]
                                            esi_2(_Size, arg2, arg1)
                                            edi_34[3] = var_1414_1
                                        label_72877a:
                                            _Size = edi_34[2]
                                            esi_2(_Size, arg2, arg1)
                                            edi_34[2] = 0
                                            CookieCheckFunction(1)
                                            return 1
                    
                    break
                
                goto label_72809c
            
            var_1420 = 1
            
            if (_Size_4 s< 0)
                esi[0x2a] = esi[0x2b]
                sub_7202a0(esi)
                sub_7202a0(esi)
                continue
        
        if (esi[4] != 0)
            int32_t ecx_39 = esi[0x2b]
            int32_t eax_59 = ecx_39 - esi[0x2a]
            
            if (eax_59 s< _Size_4)
                esi[0x2a] = ecx_39
                int32_t eax_60 = esi[5]
                _Size = _Size_4 - eax_59
                eax_60(esi[7], _Size, arg2, arg1)
                sub_7202a0(esi)
                sub_7202a0(esi)
                continue
        
        esi[0x2a] += _Size_4
        sub_7202a0(esi)
        sub_7202a0(esi)

CookieCheckFunction(0)
return 0
