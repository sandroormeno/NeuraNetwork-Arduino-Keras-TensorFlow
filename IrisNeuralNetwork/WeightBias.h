// pesos y bias de capa 0
mtx_type WL0[4][16] = {{-0.11793333, -0.28770602, -0.18893164, -0.45107627, 0.9876408,  
                        -0.04044636, -0.45777917, -0.45875597, -0.26616383, 0.49185747, 
                         0.33669066, -0.1128476,  -0.33674768,  0.43591487, 0.7513484,   0.11228631},
                         
                        {-0.51433533, -0.5446385,  -0.03172846, -0.36439335, 0.8982023,   
                          0.14724605, -0.14686595, -0.4898019,  -0.06955349, 0.8884623, 
                          0.13277002, -0.23641166, -0.00106678,  0.2684981,  0.6999156,  0.04244228},
                          
                        { 0.11334687,  0.46042788,  1.0983684,   0.34072107, 0.16432875,
                         -0.38260993,  0.6234073,  -0.26671293,  0.27760184,-0.24916206, 
                         -0.03927764,  0.7866818,   0.39882985, -0.62593544,-0.14829282,-0.48418307},
                         
                        { 0.07726979,  0.10118985,  0.7133623,  -0.333048,  0.30034527,  
                          0.29583478,  0.8564139,   0.48083603, -0.28980234,-1.1007429, 
                          0.17017227,  0.5231771,   0.6804067,  -0.935629, -0.24135731, -0.4496453 }};
                          					 					 
mtx_type BL0[1][16] =  { 0.         , 0.         ,-0.13735592,  0.          ,0.7063989,  
                        -0.02131733, -0.33018586,  0.         , 0.          ,0.4506097,  
                        -0.07894174, -0.31133556, -0.36836934,  0.24989489,  0.5501787,  
                        -0.11413496}; 


// pesos y bias de capa 1
mtx_type WL1[16][3] =   {{-0.4205378,  0.29392797, -0.10764638},
                        { 0.43370694, -0.01736325, -0.17552596},
                        {-1.3915709,  -0.17696871,  0.1446786 },
                        {-0.48326197,  0.29247802, -0.35353243},
                        {-0.52944124, -0.3642355,  -0.47598943},
                        { 0.32836142,  0.39219454,  0.3588098 },
                        {-0.73974854, -1.32747,     1.4848156 },
                        { 0.5366517,   0.08778161, -0.2855167 },
                        { 0.439529,    0.28130597,  0.28387892},
                        { 0.6708698,  -0.27740246, -1.126341},
                        {-0.14189783,  0.4702178,   0.27529016},
                        {-1.2093511,  -0.3144722,   0.59351057},
                        { 0.03456378, -0.7576988,   0.8015323},
                        { 1.466388,   -1.225487,   -0.10382273},
                        {-0.03750397, -0.00639261, -0.4778335},
                        {-0.46710804, -0.04538335,  0.22082087}};
                       
					 					 
mtx_type BL1[1][3] = {  0.00251091 , 0.1590316 , -0.44937515 }; 