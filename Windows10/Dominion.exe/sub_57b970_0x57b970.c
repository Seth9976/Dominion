// 函数: sub_57b970
// 地址: 0x57b970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 != 0x10 && arg3 != 0x10)
    if (arg2 == 0x11)
        return 2
    
    if (arg3 == 0x11)
        return 3
    
    if (arg2 != 0x16)
        if (arg2 == 0x17)
            if (arg3 == 0x16)
                return 0
            
            goto label_57b9cc
        
        if (arg2 == 0x16)
            goto label_57b9a0
        
        if ((arg2 == 5 && arg3 == 4) || (arg3 == 5 && arg2 == 4))
            return 0
    else
    label_57b9a0:
        
        if (arg3 == 0x17)
            return 0
        
    label_57b9cc:
        
        if (arg3 == 5 && arg2 == 4)
            return 0
    
    int32_t ecx_1 = 4
    int32_t eax_2 = 4
    
    if (arg2 != 5)
        eax_2 = arg2
    
    if (arg3 != 5)
        ecx_1 = arg3
    
    bool cond:1_1
    
    if (eax_2 != 0xd)
        if (eax_2 != 4)
            if (eax_2 == 6)
                if (ecx_1 == 0xd)
                    return 1
                
                if (eax_2 == 0x10 || eax_2 == 0xf || eax_2 == 0xe)
                    goto label_57baa7
                
                goto label_57bad4
            
            if (eax_2 == 0xb)
                if (ecx_1 == 0xd)
                    return 1
                
                if (eax_2 == 0xf || eax_2 == 0xe)
                    goto label_57baa7
                
                goto label_57bad4
            
            if (eax_2 == 7)
                if (ecx_1 == 0xd)
                    return 1
                
                if (eax_2 == 0xe)
                    goto label_57baa7
                
                goto label_57bad4
            
            if (eax_2 != 0xa)
                if (eax_2 != 9 && eax_2 != 0xc && eax_2 != 3 && eax_2 != 0x12 && eax_2 != 0x13
                        && eax_2 != 0x14 && eax_2 != 0x10 && eax_2 != 0xf && eax_2 != 0xe)
                    goto label_57bad4
                
                goto label_57baa7
            
            if (ecx_1 == 0xd)
                return 1
            
            goto label_57bad4
        
        if (ecx_1 == 0xd)
            return 1
        
        if (eax_2 != 0x14 && eax_2 != 0x10 && eax_2 != 0xf && eax_2 != 0xe)
        label_57bad4:
            
            if (eax_2 != 4 || ecx_1 != 3)
                goto label_57bae2
            
            return 2
        
    label_57baa7:
        cond:1_1 = ecx_1 != 0xd
    label_57ba3a:
        
        if (cond:1_1)
        label_57bae2:
            
            if (ecx_1 == 4 && eax_2 == 3)
                return 3
            
            if (eax_2 == 5)
                if (ecx_1 == 3)
                    return 2
                
            label_57bafe:
                
                if (eax_2 != 0x14)
                    if (eax_2 != 6)
                        if (eax_2 == 0x10)
                            goto label_57bcab
                        
                        if (eax_2 == 0xf)
                            goto label_57bcbd
                        
                        if (eax_2 != 0x13)
                            goto label_57bb4e
                        
                        goto label_57bcd3
                    
                    if (ecx_1 == 4)
                        return 3
                    
                    if (ecx_1 != 0x10 && ecx_1 != 0xf && ecx_1 != 0x13 && ecx_1 != 0x14)
                    label_57bc7a:
                        
                        if (eax_2 == 0x14)
                            goto label_57bc83
                        
                        if (eax_2 != 9)
                            if (eax_2 == 0x10)
                                goto label_57be46
                            
                            if (eax_2 != 0xf)
                                goto label_57bd09
                            
                            goto label_57be60
                        
                        if (ecx_1 != eax_2 && ecx_1 != 0x10 && ecx_1 != 0xf && ecx_1 != 0x13)
                        label_57be27:
                            
                            if (eax_2 == 0x13)
                                goto label_57be30
                            
                            if (eax_2 != 0x14)
                                if (eax_2 != 0xa)
                                    if (eax_2 == 0x10)
                                        goto label_57c027
                                    
                                    if (eax_2 == 0xf)
                                        goto label_57c039
                                    
                                    if (eax_2 != 0x13)
                                        goto label_57c05f
                                    
                                    goto label_57c04b
                                
                                if (ecx_1 != 0x10 && ecx_1 != 0xf && ecx_1 != 0x13)
                                label_57bff6:
                                    
                                    if (eax_2 == 0xf)
                                        goto label_57bfff
                                    
                                    if (eax_2 == 0x10)
                                        goto label_57c125
                                    
                                    if (eax_2 == 0x13)
                                        goto label_57c137
                                    
                                    if (eax_2 != 0x10)
                                        goto label_57c15e
                                    
                                    goto label_57c14d
                            else
                            label_57bfc5:
                                
                                if (ecx_1 == 0x12)
                                    return 1
                                
                            label_57c097:
                                
                                if (ecx_1 != 0x14)
                                    if (eax_2 != 0x10)
                                    label_57c15e:
                                        
                                        if (eax_2 == 0x14 || eax_2 == 1)
                                            if (ecx_1 == 0x10)
                                                return 1
                                            
                                        label_57bf7c:
                                            
                                            if (ecx_1 != 0x16)
                                                int32_t result
                                                result.b = ecx_1 == 0x17
                                                return result
                                        else if (eax_2 != 2)
                                        label_57bf6a:
                                            
                                            if (eax_2 != 0x16 && eax_2 != 0x17)
                                                goto label_57bf7c
                                        else if (ecx_1 != 0x10)
                                            if (ecx_1 == eax_2)
                                                return 1
                                            
                                            goto label_57bf7c
                                    else
                                    label_57c0a9:
                                        
                                        if (ecx_1 != 0x14 && ecx_1 != 1)
                                            if (ecx_1 == 2)
                                                return 1
                                            
                                            goto label_57bf7c
                else
                label_57bb07:
                    
                    if (ecx_1 == 4)
                        return 1
                    
                label_57bb57:
                    
                    if (ecx_1 == 6)
                        return 1
                    
                label_57bd6a:
                    
                    if (ecx_1 == 0xb)
                        return 1
                    
                label_57bc83:
                    
                    if (ecx_1 != 7)
                    label_57bc8c:
                        
                        if (eax_2 == 0x14)
                            if (ecx_1 == 0xc)
                                return 1
                            
                            goto label_57bfc5
                        
                        if (eax_2 != 0x12)
                            if (eax_2 == 0x10)
                                goto label_57bf95
                            
                            if (eax_2 != 0xf)
                                goto label_57be27
                            
                            goto label_57bfaf
                        
                        if (ecx_1 == eax_2)
                            return 0
                        
                        if (ecx_1 != 0x10 && ecx_1 != 0xf && ecx_1 != 0x13 && ecx_1 != 0x14)
                            if (eax_2 != 0xe)
                            label_57c0e2:
                                
                                if (eax_2 == 0xf)
                                    goto label_57c0e7
                                
                                if (eax_2 == 0x10)
                                    goto label_57c0fd
                                
                                if (eax_2 != 0x13)
                                    goto label_57bff6
                                
                            label_57c113:
                                
                                if (ecx_1 == 0xe)
                                    return 1
                                
                            label_57c137:
                                
                                if (ecx_1 != 0xf)
                                    goto label_57bf7c
                                
                                return 1
                            
                        label_57bf4f:
                            
                            if (ecx_1 != 0xf && ecx_1 != 0x10 && ecx_1 != 0x13)
                                goto label_57bf6a
            else if (eax_2 != 3)
                if (eax_2 == 0x10)
                    if (ecx_1 == 3)
                        return 1
                    
                    goto label_57bc07
                
                if (eax_2 == 0xf)
                    if (ecx_1 == 3)
                        return 1
                    
                    goto label_57bc1d
                
                if (eax_2 == 0x13)
                    if (ecx_1 == 3)
                        return 1
                    
                    goto label_57bc37
                
                if (eax_2 == 0x14)
                    if (ecx_1 == 3)
                        return 1
                    
                    goto label_57bb07
                
                if (eax_2 != 4)
                    if (eax_2 == 0x10)
                    label_57bc07:
                        
                        if (ecx_1 == 4)
                            return 1
                        
                    label_57bcab:
                        
                        if (ecx_1 == 6)
                            return 1
                        
                    label_57bd28:
                        
                        if (ecx_1 == 0xb)
                            return 1
                        
                    label_57bdc2:
                        
                        if (ecx_1 == 7)
                            return 1
                        
                    label_57be46:
                        
                        if (ecx_1 == 9)
                            return 1
                        
                    label_57bed3:
                        
                        if (ecx_1 == 0xc)
                            return 1
                        
                    label_57bf95:
                        
                        if (ecx_1 == 0x12)
                            return 1
                        
                    label_57c027:
                        
                        if (ecx_1 == 0xa)
                            return 1
                        
                    label_57c085:
                        
                        if (ecx_1 == 0x13)
                            return 1
                        
                    label_57c0fd:
                        
                        if (ecx_1 == 0xe)
                            return 1
                        
                    label_57c125:
                        
                        if (ecx_1 == 0xf)
                            return 1
                        
                    label_57c14d:
                        
                        if (ecx_1 != 0x10)
                            goto label_57c0a9
                        
                        return 1
                    
                    if (eax_2 != 0xf)
                        if (eax_2 != 0x13)
                            goto label_57bafe
                        
                    label_57bc37:
                        
                        if (ecx_1 == 4)
                            return 1
                        
                    label_57bcd3:
                        
                        if (ecx_1 == 6)
                            return 1
                        
                    label_57bd54:
                        
                        if (ecx_1 == 0xb)
                            return 1
                        
                    label_57bdee:
                        
                        if (ecx_1 == 7)
                            return 1
                        
                    label_57bd12:
                        
                        if (ecx_1 == 9)
                            return 1
                        
                    label_57bf03:
                        
                        if (ecx_1 == 0xc)
                            return 1
                        
                    label_57be30:
                        
                        if (ecx_1 == 0x12)
                            return 1
                        
                    label_57c04b:
                        
                        if (ecx_1 == 0xa)
                            return 1
                        
                    label_57beab:
                        
                        if (ecx_1 != 0xe && ecx_1 != 0xf)
                            if (ecx_1 == 0x10)
                                return 1
                            
                            goto label_57c113
                    else
                    label_57bc1d:
                        
                        if (ecx_1 == 4)
                            return 1
                        
                    label_57bcbd:
                        
                        if (ecx_1 == 6)
                            return 1
                        
                    label_57bd3e:
                        
                        if (ecx_1 == 0xb)
                            return 1
                        
                    label_57bdd4:
                        
                        if (ecx_1 == 7)
                            return 1
                        
                    label_57be60:
                        
                        if (ecx_1 == 9)
                            return 1
                        
                    label_57bee9:
                        
                        if (ecx_1 == 0xc)
                            return 1
                        
                    label_57bfaf:
                        
                        if (ecx_1 == 0x12)
                            return 1
                        
                    label_57c039:
                        
                        if (ecx_1 == 0xa)
                            return 1
                        
                    label_57c073:
                        
                        if (ecx_1 == 0x13)
                            return 1
                        
                    label_57c0e7:
                        
                        if (ecx_1 == 0xe)
                            return 1
                        
                    label_57bfff:
                        
                        if (ecx_1 != 0xf && ecx_1 != 0x10)
                            if (ecx_1 == 0x13)
                                return 1
                            
                            goto label_57bf7c
                else if (ecx_1 != eax_2 && ecx_1 != 0x10 && ecx_1 != 0xf && ecx_1 != 0x13
                        && ecx_1 != 0x14)
                    if (ecx_1 == 6)
                        return 2
                    
                    if (eax_2 != 7)
                    label_57bdbd:
                        
                        if (eax_2 == 0x10)
                            goto label_57bdc2
                        
                        if (eax_2 == 0xf)
                            goto label_57bdd4
                        
                        if (eax_2 != 0x13)
                            goto label_57bc7a
                        
                        goto label_57bdee
                    
                label_57bd91:
                    
                    if (ecx_1 != 0x10 && ecx_1 != 0xf && ecx_1 != 0x13)
                        if (ecx_1 == 0x14)
                            return 1
                        
                        goto label_57bc8c
            else
                if (ecx_1 == 5)
                    return 3
                
                if (ecx_1 != eax_2 && ecx_1 != 0x10 && ecx_1 != 0xf && ecx_1 != 0x13
                    && ecx_1 != 0x14)
                label_57bb4e:
                    
                    if (eax_2 == 0x14)
                        goto label_57bb57
                    
                    if (eax_2 != 0xb)
                        if (eax_2 == 0x10)
                            goto label_57bd28
                        
                        if (eax_2 == 0xf)
                            goto label_57bd3e
                        
                        if (eax_2 == 0x13)
                            goto label_57bd54
                        
                        if (eax_2 == 0x14)
                            goto label_57bd6a
                        
                        if (eax_2 != 7)
                            goto label_57bdbd
                        
                        if (ecx_1 == eax_2)
                            return 1
                        
                        goto label_57bd91
                    
                    if (ecx_1 != 0x10 && ecx_1 != 0xf && ecx_1 != 0x13 && ecx_1 != 0x14)
                    label_57bd09:
                        
                        if (eax_2 == 0x13)
                            goto label_57bd12
                        
                        if (eax_2 != 0xc)
                            if (eax_2 == 0x10)
                                goto label_57bed3
                            
                            if (eax_2 == 0xf)
                                goto label_57bee9
                            
                            if (eax_2 != 0x13)
                                goto label_57bc8c
                            
                            goto label_57bf03
                        
                        if (ecx_1 != eax_2 && ecx_1 != 0x10 && ecx_1 != 0xf && ecx_1 != 0x13
                                && ecx_1 != 0x14)
                            if (eax_2 == 0x13)
                                goto label_57beab
                            
                        label_57c05f:
                            
                            if (eax_2 != 0xe)
                                if (eax_2 == 0xf)
                                    goto label_57c073
                                
                                if (eax_2 == 0x10)
                                    goto label_57c085
                                
                                if (eax_2 == 0x14)
                                    goto label_57c097
                                
                                if (eax_2 != 0xe)
                                    goto label_57c0e2
                            else if (ecx_1 == 0x13)
                                return 1
                            
                            if (ecx_1 != 0xe)
                                goto label_57bf4f
    else if (ecx_1 != eax_2 && ecx_1 != 4 && ecx_1 != 6 && ecx_1 != 0xb && ecx_1 != 7
            && ecx_1 != 0xa && ecx_1 != 9 && ecx_1 != 0xc && ecx_1 != 3 && ecx_1 != 0x12
            && ecx_1 != 0x13 && ecx_1 != 0x14 && ecx_1 != 0x10 && ecx_1 != 0xf)
        cond:1_1 = ecx_1 != 0xe
        goto label_57ba3a

return 1
