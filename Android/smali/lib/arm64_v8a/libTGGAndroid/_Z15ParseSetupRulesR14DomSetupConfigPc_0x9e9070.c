// 函数: _Z15ParseSetupRulesR14DomSetupConfigPc
// 地址: 0x9e9070
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
char* s1 = trim(arg2, 0x20)
char* i = strcasecmp(s1, "Standard")

if (i.d == 0)
    *(arg1 + 0x16f8) = 0
else
    i = strcasecmp(s1, "Learning")
    
    if (i.d == 0)
        *(arg1 + 0x16f8) = 1
    else
        i = strcasecmp(s1, "Friendly")
        
        if (i.d == 0)
            *(arg1 + 0x16f8) = 2
        else
            i = strcasecmp(s1, "Strict")
            
            if (i.d == 0)
                *(arg1 + 0x16f8) = 3
            else
                i = strncasecmp(s1, "Custom", 6)
                
                if (i.d == 0)
                    *(arg1 + 0x16f8) = 4
                    
                    if (zx.d(s1[6]) == 0x3a)
                        for (i = strtok(&s1[7], ","); i != 0; i = strtok(nullptr, ","))
                            char* s1_1 = trim(i, 0x20)
                            
                            if (strcasecmp(s1_1, "LogRound") == 0)
                                *(arg1 + 0x16f8) = 4
                                *(arg1 + 0x1704) = 0
                            else if (strcasecmp(s1_1, "LogFull") == 0)
                                *(arg1 + 0x16f8) = 4
                                *(arg1 + 0x1704) = 1
                            else if (strcasecmp(s1_1, "ScoreHidden") == 0)
                                *(arg1 + 0x16f8) = 4
                                *(arg1 + 0x1708) = 0
                            else if (strcasecmp(s1_1, "ScoreTotal") == 0)
                                *(arg1 + 0x16f8) = 4
                                *(arg1 + 0x1708) = 1
                            else if (strcasecmp(s1_1, "ScoreTracked") == 0)
                                *(arg1 + 0x16f8) = 4
                                *(arg1 + 0x1708) = 2
                            else if (strcasecmp(s1_1, "CardsNone") == 0)
                                *(arg1 + 0x16f8) = 4
                            else if (strcasecmp(s1_1, "CardsTracked") == 0)
                                *(arg1 + 0x16f8) = 0x100000004
                            else if (strcasecmp(s1_1, "CardsVisible") == 0)
                                *(arg1 + 0x16f8) = 0x200000004
                            else if (strcasecmp(s1_1, "UndosNone") == 0)
                                *(arg1 + 0x16f8) = 4
                                *(arg1 + 0x1700) = 0
                            else if (strcasecmp(s1_1, "UndosNoRed") == 0)
                                *(arg1 + 0x16f8) = 4
                                *(arg1 + 0x1700) = 1
                            else if (strcasecmp(s1_1, "UndosVerified") == 0)
                                *(arg1 + 0x16f8) = 4
                                *(arg1 + 0x1700) = 2
                            else if (strcasecmp(s1_1, "UndosUnlimited") == 0)
                                *(arg1 + 0x16f8) = 4
                                *(arg1 + 0x1700) = 3

return i
