C    Species wood and bark specific gravity, morist content and bark to wood vol percentage in FIADB
C    FIASPN - FIA species number
C    WSG - wood specific gravity (green volume basis dry weight)
C    BSG - bark specific gravity (green volume basis dry weight)
C    WMC - average miosture content of wood as a % of oven-dry weight
C    BMC - average miosture content of bark as a % of oven-dry weight
C    BVP - bark volume %
C    JSP - Jenkins species group code
C    SAPADJ -  sapling adjustment factor
C
      INTEGER I, J
      REAL FIASPSG(455, 8)
C    FIASPN,   WSG,   BSG,  WMC,  BMC,   BVP,JSP,   SAPADJ
      DATA (FIASPSG(J, I), I=1,8), J=1,50)/
     &   10,  0.36,  0.49,   84,   62,  11.8,  3,  0.60817,  
     &   11,  0.40,  0.44,   70,   64,  14.0,  3,  0.60193,  
     &   12,  0.33,  0.40,  119,  100,  12.0,  3,  0.60817,  
     &   14,  0.36,  0.49,   84,   62,  11.8,  3,  0.60193,  
     &   15,  0.37,  0.56,  104,   63,  12.0,  3,  0.60193,  
     &   16,  0.36,  0.49,   84,   62,  11.8,  3,  0.63086,  
     &   17,  0.35,  0.57,  106,   63,  12.0,  3,  0.60193,  
     &   18,  0.36,  0.49,   84,   62,  11.8,  3,  0.60193,  
     &   19,  0.31,  0.50,   45,   63,  10.8,  3,  0.60193,  
     &   20,  0.36,  0.44,  114,   20,  10.8,  3,  0.60193,  
     &   21,  0.36,  0.49,   84,   62,  11.8,  3,  0.60193,  
     &   22,  0.37,  0.49,   30,   64,  10.8,  3,  0.60193,  
     &   40,  0.37,  0.40,   77,   92,  11.6,  1,  0.63086,  
     &   41,  0.39,  0.40,   74,   64,  11.6,  1,  0.45789,  
     &   42,  0.42,  0.40,   72,  112,  11.6,  1,  0.45789,  
     &   43,  0.31,  0.40,   86,  100,  11.6,  1,  0.63086,  
     &   50,  0.41,  0.42,   74,   71,  14.3,  1,  0.45789,  
     &   51,  0.41,  0.42,   74,   71,  14.3,  1,  0.45789,  
     &   52,  0.41,  0.42,   74,   71,  14.3,  1,  0.45789,  
     &   53,  0.41,  0.42,   74,   71,  14.3,  1,  0.45789,  
     &   54,  0.41,  0.42,   74,   71,  14.3,  1,  0.45789,  
     &   55,  0.41,  0.42,   74,   71,  14.3,  1,  0.45789,  
     &   56,  0.41,  0.42,   74,   71,  14.3,  1,  0.63086,  
     &   57,  0.45,  0.40,   36,   60,  12.0,  1,  0.63086,  
     &   58,  0.45,  0.40,   36,   60,  12.0, 10,  0.35166,  
     &   59,  0.45,  0.40,   36,   60,  12.0, 10,  0.35166,  
     &   60,  0.45,  0.40,   36,   60,  12.0, 10,  0.35166,  
     &   61,  0.45,  0.40,   36,   60,  12.0, 10,  0.63086,  
     &   62,  0.45,  0.40,   36,   60,  12.0, 10,  0.35166,  
     &   63,  0.48,  0.40,   34,   60,  12.0, 10,  0.35166,  
     &   64,  0.45,  0.40,   36,   60,  12.0,  1,  0.45789,  
     &   65,  0.68,  0.40,   35,   60,  12.0, 10,  0.35166,  
     &   66,  0.45,  0.40,   36,   60,  12.0, 10,  0.35166,  
     &   67,  0.42,  0.40,   41,   60,  12.0,  1,  0.63086,  
     &   68,  0.44,  0.40,   35,   60,  12.0,  1,  0.63086,  
     &   69,  0.45,  0.40,   36,   60,  12.0, 10,  0.35166,  
     &   70,  0.49,  0.32,   57,   82,  14.0,  1,  0.63086,  
     &   71,  0.49,  0.30,   54,   98,  14.0,  1,  0.63086,  
     &   72,  0.49,  0.32,   57,   82,  14.0,  1,  0.45789,  
     &   73,  0.48,  0.33,   60,   65,  14.0,  1,  0.79964,  
     &   81,  0.35,  0.25,  106,   28,  17.0,  1,  0.5884,  
     &   90,  0.36,  0.44,   59,   81,  12.6,  5,  0.60817,  
     &   91,  0.36,  0.44,   59,   81,  12.6,  5,  0.63086,  
     &   92,  0.36,  0.44,   59,   81,  12.6,  5,  0.44215,  
     &   93,  0.33,  0.51,   89,   79,  11.2,  5,  0.44215,  
     &   94,  0.37,  0.39,   52,   77,  13.0,  5,  0.60817,  
     &   95,  0.38,  0.42,   48,   91,  13.0,  5,  0.60817,  
     &   96,  0.36,  0.44,   59,   81,  12.6,  5,  0.44215,  
     &   97,  0.37,  0.32,   47,   75,  13.0,  5,  0.60817,  
     &   98,  0.33,  0.55,   60,   81,  12.5,  5,  0.46288/

      DATA (FIASPSG(J, I), I=1,8), J=51,100)/  
     &  100,  0.43,  0.40,   76,   68,  16.1,  4,  0.63086,  
     &  101,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  102,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  103,  0.39,  0.38,  105,   69,  12.0,  4,  0.45789,  
     &  104,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  105,  0.40,  0.41,  100,   92,  14.0,  4,  0.6432,  
     &  106,  0.50,  0.40,   28,   60,  13.4, 10,  0.35166,  
     &  107,  0.46,  0.45,   32,   89,  15.0,  4,  1.01056,  
     &  108,  0.38,  0.38,   64,   64,   8.9,  4,  0.88314,  
     &  109,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  110,  0.47,  0.35,   77,   60,  16.0,  4,  0.76331,  
     &  111,  0.54,  0.35,   72,   88,  18.0,  4,  0.92212,  
     &  112,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  113,  0.37,  0.50,   95,   12,  13.4,  4,  0.45789,  
     &  114,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  115,  0.41,  0.45,   76,   25,  13.4,  4,  1.01056,  
     &  116,  0.37,  0.36,  104,   34,  25.6,  4,  0.43374,  
     &  117,  0.34,  0.35,  130,   88,  25.6,  4,  0.55715,  
     &  118,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  119,  0.36,  0.47,   56,   84,  12.6,  4,  0.57387,  
     &  120,  0.45,  0.45,   60,   42,  22.0,  4,  0.45789,  
     &  121,  0.54,  0.45,   63,   89,  14.0,  4,  0.92212,  
     &  122,  0.38,  0.35,   90,   33,  25.6,  4,  0.43374,  
     &  123,  0.49,  0.45,   77,   60,  13.4,  4,  1.01056,  
     &  124,  0.40,  0.40,  100,   60,  13.4,  4,  0.45789,  
     &  125,  0.41,  0.27,   64,   90,  16.0,  4,  0.72911,  
     &  126,  0.47,  0.34,   70,   89,  13.4,  4,  1.01056,  
     &  127,  0.40,  0.40,   80,   60,  22.0,  4,  0.45789,  
     &  128,  0.51,  0.33,   60,   94,  13.4,  4,  1.01056,  
     &  129,  0.34,  0.47,   65,   70,  16.0,  4,  0.72911,  
     &  130,  0.43,  0.40,   76,   68,  16.1,  4,  1.01056,  
     &  131,  0.47,  0.33,   81,   99,  16.6,  4,  0.76331,  
     &  132,  0.45,  0.54,   78,   90,  13.4,  4,  1.01056,  
     &  133,  0.43,  0.40,   76,   68,  16.1, 10,  0.35166,  
     &  134,  0.43,  0.40,   76,   68,  16.1, 10,  0.35166,  
     &  135,  0.43,  0.40,   76,   68,  16.1,  4,  0.43374,  
     &  136,  0.43,  0.40,   76,   68,  16.1,  4,  0.63086,  
     &  137,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  138,  0.43,  0.40,   76,   68,  16.1, 10,  0.45789,  
     &  139,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  140,  0.43,  0.40,   76,   68,  16.1, 10,  0.35166,  
     &  141,  0.43,  0.40,   76,   68,  16.1, 10,  0.35166,  
     &  142,  0.43,  0.40,   76,   68,  16.1,  4,  0.45789,  
     &  143,  0.43,  0.40,   76,   68,  16.1, 10,  0.35166,  
     &  144,  0.43,  0.40,   76,   68,  16.1,  4,  0.63086,  
     &  200,  0.45,  0.44,   35,   89,  17.3,  2,  0.63086,  
     &  201,  0.45,  0.44,   35,   89,  17.3,  2,  0.45789,  
     &  202,  0.45,  0.44,   35,   89,  17.3,  2,  0.52566,  
     &  211,  0.36,  0.43,  123,   16,  18.0,  1,  0.40997,  
     &  212,  0.34,  0.34,  178,   18,  18.0,  1,  0.45789/

      DATA (FIASPSG(J, I), I=1,8), J=101,150)/  
     &  220,  0.42,  0.50,   95,   99,  20.0,  1,  0.63086,  
     &  221,  0.42,  0.50,   95,   99,  20.0,  1,  0.95175,  
     &  222,  0.42,  0.50,   95,   99,  20.0,  1,  0.95175,  
     &  223,  0.42,  0.50,   95,   99,  20.0,  1,  0.95175,  
     &  230,  0.60,  0.59,   47,   98,   4.0,  3,  0.63086,  
     &  231,  0.60,  0.59,   47,   98,   4.0,  3,  0.45789,  
     &  232,  0.60,  0.59,   47,   98,   4.0,  3,  0.63086,  
     &  240,  0.30,  0.40,   70,   74,  12.5,  1,  0.63086,  
     &  241,  0.29,  0.42,   99,   91,  14.0,  1,  0.63086,  
     &  242,  0.31,  0.37,   40,   56,  10.6,  1,  0.7049,  
     &  250,  0.41,  0.42,   74,   71,  14.3,  3,  0.63086,  
     &  251,  0.41,  0.42,   74,   71,  14.3,  3,  0.45789,  
     &  252,  0.41,  0.42,   74,   71,  14.3,  3,  0.63086,  
     &  260,  0.41,  0.46,   78,   98,  16.2,  3,  0.62759,  
     &  261,  0.38,  0.46,  111,   99,  17.0,  3,  0.62759,  
     &  262,  0.41,  0.46,   78,   98,  16.2,  3,  0.62759,  
     &  263,  0.42,  0.50,   56,  102,  15.8,  3,  0.67063,  
     &  264,  0.42,  0.41,   68,   92,  15.8,  3,  0.45789,  
     &  299,  0.41,  0.42,   74,   71,  14.3,  4,  0.45789,  
     &  300,  0.52,  0.53,   75,   80,  15.2, 10,  0.65075,  
     &  303,  0.52,  0.53,   75,   80,  15.2, 10,  0.84031,  
     &  304,  0.52,  0.53,   75,   80,  15.2, 10,  0.84031,  
     &  310,  0.47,  0.53,   70,   91,  10.9,  7,  0.84103,  
     &  311,  0.47,  0.53,   70,   91,  10.9,  7,  0.84103,  
     &  312,  0.44,  0.48,   71,  114,  10.0,  7,  0.96395,  
     &  313,  0.42,  0.50,   91,   92,   8.6,  7,  0.79248,  
     &  314,  0.52,  0.54,   70,   90,  15.6,  9,  0.84103,  
     &  315,  0.44,  0.50,   71,   89,   8.6,  7,  0.84031,  
     &  316,  0.49,  0.60,   64,   79,   8.6,  7,  0.7443,  
     &  317,  0.44,  0.57,   68,   80,   8.6,  7,  0.7443,  
     &  318,  0.56,  0.54,   57,   90,  15.6,  9,  0.84103,  
     &  319,  0.47,  0.53,   70,   91,  10.9,  7,  0.84031,  
     &  320,  0.47,  0.53,   70,   91,  10.9,  7,  0.84103,  
     &  321,  0.47,  0.53,   70,   91,  10.9, 10,  0.65075,  
     &  322,  0.47,  0.53,   70,   91,  10.9, 10,  0.65075,  
     &  323,  0.47,  0.53,   70,   91,  10.9,  8,  0.84103,  
     &  330,  0.33,  0.50,  143,   89,  15.0,  8,  0.96395,  
     &  331,  0.33,  0.50,  143,   89,  15.0,  8,  0.79248,  
     &  332,  0.33,  0.50,  143,   89,  15.0,  8,  0.79248,  
     &  333,  0.33,  0.50,  143,   89,  15.0,  8,  0.96395,  
     &  334,  0.33,  0.50,  143,   89,  15.0,  8,  0.79248,  
     &  336,  0.33,  0.50,  143,   89,  15.0,  8,  0.84031,  
     &  337,  0.33,  0.50,  143,   89,  15.0,  8,  0.79248,  
     &  341,  0.46,  0.45,   74,   78,  15.0,  8,  0.84031,  
     &  345,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  350,  0.37,  0.56,   99,   75,  11.5,  6,  0.79248,  
     &  351,  0.37,  0.56,   99,   75,  12.0,  6,  0.74995,  
     &  352,  0.37,  0.56,   99,   75,  11.5,  6,  0.96395,  
     &  353,  0.37,  0.56,   99,   75,  11.5,  6,  0.96395,  
     &  355,  0.37,  0.56,   99,   75,  11.5,  6,  0.79248/  

      DATA (FIASPSG(J, I), I=1,8), J=151,200)/  
     &  356,  0.66,  0.50,   48,   60,   8.6,  8,  0.84031,
     &  357,  0.66,  0.50,   48,   60,   8.6,  8,  0.84031,  
     &  358,  0.66,  0.50,   48,   60,   8.6,  8,  0.84031,  
     &  360,  0.58,  0.60,   66,   60,  15.0,  8,  0.84031,  
     &  361,  0.58,  0.60,   66,   60,  15.0,  8,  0.96395,  
     &  362,  0.58,  0.60,   66,   60,  15.0,  8,  0.96395,  
     &  363,  0.58,  0.60,   66,   60,  15.0, 10,  0.96395,  
     &  367,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  370,  0.51,  0.58,   74,   55,  11.0,  7,  0.79248,  
     &  371,  0.55,  0.62,   72,   60,   9.8,  7,  0.78859,  
     &  372,  0.60,  0.62,   73,   53,   9.8,  7,  0.93185,  
     &  373,  0.49,  0.55,   86,   46,   9.8,  7,  0.79248,  
     &  374,  0.51,  0.58,   74,   55,  11.0,  7,  0.96395,  
     &  375,  0.48,  0.56,   74,   52,  12.6,  7,  0.79248,  
     &  377,  0.51,  0.58,   74,   55,  11.0,  7,  0.79248,  
     &  378,  0.51,  0.58,   74,   55,  11.0,  7,  0.96395,  
     &  379,  0.45,  0.55,   64,   63,  12.6,  7,  0.79248,  
     &  381,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  391,  0.58,  0.55,   46,   89,   8.6,  8,  0.84031,  
     &  400,  0.62,  0.62,   69,   57,  16.0,  9,  0.74366,  
     &  401,  0.61,  0.60,   84,   60,  16.0,  9,  0.74366,  
     &  402,  0.60,  0.60,   71,   60,  16.0,  9,  0.74366,  
     &  403,  0.66,  0.60,   65,   60,  16.0,  9,  0.74366,  
     &  404,  0.60,  0.60,   66,   60,  16.0,  9,  0.74366,  
     &  405,  0.62,  0.60,   65,   60,  16.0,  9,  0.74366,  
     &  406,  0.56,  0.60,   77,   60,  16.0,  9,  0.74366,  
     &  407,  0.64,  0.72,   60,   34,  16.0,  9,  0.74366,  
     &  408,  0.62,  0.62,   69,   57,  16.0,  9,  0.74366,  
     &  409,  0.64,  0.60,   63,   60,  16.0,  9,  0.74366,  
     &  410,  0.62,  0.62,   69,   57,  16.0,  9,  0.74366,  
     &  411,  0.62,  0.62,   69,   57,  16.0,  9,  0.74366,  
     &  412,  0.62,  0.62,   69,   57,  16.0,  9,  0.74366,  
     &  413,  0.62,  0.62,   69,   57,  16.0,  9,  0.74366,  
     &  420,  0.40,  0.50,  120,   89,  15.0,  8,  0.84031,  
     &  421,  0.40,  0.50,  120,   89,  15.0,  8,  0.84031,  
     &  422,  0.40,  0.50,  120,   89,  15.0,  8,  0.79248,  
     &  423,  0.40,  0.50,  120,   89,  15.0,  8,  0.84031,  
     &  424,  0.40,  0.50,  120,   89,  15.0,  8,  0.84031,  
     &  431,  0.42,  0.42,  133,   91,  12.0,  8,  0.96395,  
     &  450,  0.38,  0.50,   73,   89,  15.0,  8,  0.93185,  
     &  451,  0.38,  0.50,   73,   89,  15.0,  8,  0.84031,  
     &  452,  0.38,  0.50,   73,   89,  15.0,  8,  0.79248,  
     &  460,  0.49,  0.49,   64,   90,  15.0,  8,  0.79248,  
     &  461,  0.49,  0.49,   64,   90,  15.0,  8,  0.79248,  
     &  462,  0.49,  0.49,   64,   90,  15.0,  8,  0.79248,  
     &  463,  0.49,  0.49,   64,   90,  15.0,  8,  0.79248,  
     &  471,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  475,  0.52,  0.53,   75,   80,  15.2, 10,  0.65075,
     &  481,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  490,  0.61,  0.58,   40,   91,  15.0,  8,  0.84031/  

      DATA (FIASPSG(J, I), I=1,8), J=201,250)/  
     &  491,  0.64,  0.58,   33,   91,  15.0,  8,  0.93185,  
     &  492,  0.58,  0.58,   46,   91,  15.0,  8,  0.96395,  
     &  500,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  501,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  502,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  503,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  504,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  505,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  506,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  507,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  508,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  509,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  510,  0.52,  0.53,   75,   80,  15.2,  8,  0.93185,  
     &  511,  0.52,  0.53,   75,   80,  15.2,  8,  0.96395,  
     &  512,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  513,  0.52,  0.53,   75,   80,  15.2,  8,  0.93185,  
     &  514,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  520,  0.64,  0.50,   58,   89,  15.0,  8,  0.84031,  
     &  521,  0.64,  0.50,   58,   89,  15.0,  8,  0.93185,  
     &  522,  0.64,  0.50,   58,   89,  15.0,  8,  0.84031,  
     &  523,  0.52,  0.53,   75,   80,  15.2, 10,  0.84031,  
     &  531,  0.56,  0.67,   55,   89,   6.0,  9,  0.63243,  
     &  540,  0.51,  0.46,   61,   86,  16.0,  8,  0.93622,  
     &  541,  0.55,  0.50,   46,   89,  16.0,  8,  0.93622,  
     &  542,  0.50,  0.50,   60,   89,  16.0,  8,  0.96395,  
     &  543,  0.45,  0.43,   85,   90,  16.0,  8,  0.93622,  
     &  544,  0.53,  0.48,   57,   70,  16.0,  8,  0.93622,  
     &  545,  0.48,  0.45,   67,   89,  16.0,  8,  0.93622,  
     &  546,  0.53,  0.39,   51,   89,  16.0,  8,  0.93622,  
     &  547,  0.51,  0.46,   61,   86,  16.0,  8,  0.96395,  
     &  548,  0.51,  0.46,   61,   86,  16.0,  8,  0.93622,  
     &  549,  0.51,  0.46,   61,   86,  16.0,  8,  0.93622,  
     &  550,  0.60,  0.50,   60,   89,  15.0,  8,  0.93185,  
     &  551,  0.60,  0.50,   60,   89,  15.0,  8,  0.93185,  
     &  552,  0.60,  0.50,   60,   89,  15.0,  8,  0.93185,  
     &  555,  0.52,  0.53,   75,   80,  15.2,  8,  0.79248,  
     &  561,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  571,  0.53,  0.50,   51,   60,  15.0,  8,  0.93185,  
     &  580,  0.42,  0.50,   68,   89,  15.0,  8,  0.79248,  
     &  581,  0.42,  0.50,   68,   89,  15.0,  8,  0.79248,  
     &  582,  0.42,  0.50,   68,   89,  15.0,  8,  0.79248,  
     &  583,  0.42,  0.50,   68,   89,  15.0,  8,  0.79248,  
     &  591,  0.50,  0.50,   83,   89,  15.0,  8,  0.93185,  
     &  600,  0.44,  0.37,   92,   89,  15.0,  8,  0.79248,  
     &  601,  0.36,  0.40,  105,   88,  15.0,  8,  0.79248,  
     &  602,  0.51,  0.33,   79,   89,  15.0,  8,  0.8722,  
     &  603,  0.44,  0.37,   92,   89,  15.0,  8,  0.96395,
     &  604,  0.44,  0.37,   92,   89,  15.0,  8,  0.96395,  
     &  605,  0.44,  0.37,   92,   89,  15.0,  8,  0.79248,  
     &  606,  0.44,  0.37,   92,   89,  15.0,  8,  0.96395/  

      DATA (FIASPSG(J, I), I=1,8), J=251,300)/  
     &  611,  0.46,  0.42,   74,   91,  15.0,  8,  0.74856,  
     &  621,  0.40,  0.38,   95,  124,  18.0,  8,  0.85175,  
     &  631,  0.58,  0.62,   80,   60,  19.0,  8,  0.96395,  
     &  641,  0.76,  0.60,   31,   60,  15.0,  8,  0.84031,  
     &  650,  0.43,  0.44,   92,   93,  15.0,  8,  0.79248,  
     &  651,  0.44,  0.44,   78,   89,  15.0,  8,  0.79248,  
     &  652,  0.46,  0.44,  106,   89,  15.0,  8,  0.79248,  
     &  653,  0.42,  0.44,   87,  104,  15.0,  8,  0.79248,  
     &  654,  0.43,  0.44,   92,   93,  15.0,  8,  0.84031,  
     &  655,  0.40,  0.44,   96,   89,  15.0,  8,  0.79248,  
     &  657,  0.43,  0.44,   92,   93,  15.0,  8,  0.79248,  
     &  658,  0.43,  0.44,   92,   93,  15.0,  8,  0.79248,  
     &  660,  0.61,  0.50,   78,   70,  15.0,  8,  0.84031,  
     &  661,  0.61,  0.50,   78,   70,  15.0,  8,  0.96395,  
     &  662,  0.61,  0.50,   78,   70,  15.0,  8,  0.84031,  
     &  663,  0.61,  0.50,   78,   70,  15.0,  8,  0.84031,  
     &  664,  0.61,  0.50,   78,   70,  15.0,  8,  0.84031,  
     &  680,  0.52,  0.53,   75,   80,  15.2,  8,  0.93185,  
     &  681,  0.52,  0.53,   75,   80,  15.2,  8,  0.93185,  
     &  682,  0.52,  0.53,   75,   80,  15.2,  8,  0.93185,  
     &  683,  0.52,  0.53,   75,   80,  15.2,  8,  0.93185,  
     &  684,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  690,  0.46,  0.51,   98,   77,  14.0,  8,  0.84108,  
     &  691,  0.46,  0.58,   95,   82,  14.0,  8,  0.84108,  
     &  692,  0.46,  0.51,   98,   77,  14.0,  8,  0.84031,  
     &  693,  0.46,  0.44,  101,   71,  14.0,  8,  0.84108,  
     &  694,  0.46,  0.51,   98,   77,  14.0,  8,  0.84108,  
     &  701,  0.63,  0.50,   53,   89,  15.0,  8,  0.84031,  
     &  711,  0.50,  0.60,   70,   60,  15.0,  8,  0.84031,  
     &  712,  0.52,  0.53,   75,   80,  15.2,  8,  0.79248,  
     &  720,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  721,  0.52,  0.53,   75,   80,  15.2,  8,  0.79248,  
     &  722,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  729,  0.46,  0.60,   81,   84,   8.0,  8,  0.79248,  
     &  730,  0.46,  0.60,   81,   84,   8.0,  8,  0.96395,  
     &  731,  0.46,  0.60,   81,   84,   8.0,  8,  0.79248,  
     &  732,  0.46,  0.60,   81,   84,   8.0,  8,  0.96395,  
     &  740,  0.35,  0.46,  106,   88,  18.4,  6,  0.69089,  
     &  741,  0.31,  0.50,  107,   86,  22.0,  6,  0.69089,  
     &  742,  0.37,  0.38,  117,   56,  22.0,  6,  0.69089,  
     &  743,  0.36,  0.59,   91,   90,  14.4,  6,  0.69089,  
     &  744,  0.35,  0.46,  106,   88,  18.4,  6,  0.69089,  
     &  745,  0.35,  0.46,  106,   88,  18.4,  6,  0.37756,  
     &  746,  0.35,  0.50,  129,  102,  14.4,  6,  0.69089,  
     &  747,  0.31,  0.40,  138,  100,  16.3,  6,  0.37756,  
     &  748,  0.41,  0.41,   56,   92,  22.0,  6,  0.37756,  
     &  749,  0.35,  0.46,  106,   88,  18.4,  6,  0.37756,  
     &  752,  0.35,  0.46,  106,   88,  18.4,  6,  0.69089,
     &  753,  0.35,  0.46,  106,   88,  18.4,  6,  0.69089,  
     &  755,  0.78,  0.65,   21,   41,  15.0, 10,  0.65075/  

      DATA (FIASPSG(J, I), I=1,8), J=301,350)/  
     &  756,  0.78,  0.65,   21,   41,  15.0, 10,  0.65075,  
     &  757,  0.78,  0.65,   21,   41,  15.0, 10,  0.65075,  
     &  758,  0.78,  0.65,   21,   41,  15.0, 10,  0.65075,  
     &  760,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  761,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  762,  0.47,  0.63,   53,   91,   9.2,  8,  0.79248,  
     &  763,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  764,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  765,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  766,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  768,  0.47,  0.63,   53,   91,   9.2,  8,  0.96395,  
     &  769,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  770,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  771,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  772,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  773,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  774,  0.47,  0.63,   53,   91,   9.2,  8,  0.84031,  
     &  800,  0.59,  0.58,   75,   83,  19.1,  9,  0.93185,  
     &  801,  0.59,  0.58,   75,   83,  19.1,  9,  0.77351,  
     &  802,  0.60,  0.56,   68,   89,  16.0,  9,  0.76989,  
     &  803,  0.59,  0.58,   75,   83,  19.1, 10,  0.65075,  
     &  804,  0.64,  0.55,   58,   89,  16.0,  9,  0.76989,  
     &  805,  0.70,  0.64,   74,   90,  16.0,  9,  0.77351,  
     &  806,  0.60,  0.71,   71,   49,  22.0,  9,  0.77993,  
     &  807,  0.59,  0.58,   75,   83,  19.1,  9,  0.77351,  
     &  808,  0.59,  0.58,   75,   83,  19.1,  9,  0.76989,  
     &  809,  0.59,  0.58,   75,   83,  19.1,  9,  0.77993,  
     &  810,  0.59,  0.58,   75,   83,  19.1, 10,  0.65075,  
     &  811,  0.59,  0.58,   75,   83,  19.1,  9,  0.77351,  
     &  812,  0.52,  0.68,   97,   48,  22.0,  9,  0.77993,  
     &  813,  0.61,  0.63,   68,   91,  22.0,  9,  0.81068,  
     &  814,  0.61,  0.63,   66,   66,  22.0, 10,  0.65075,  
     &  815,  0.64,  0.63,   58,   65,  16.0,  9,  0.77351,  
     &  816,  0.59,  0.58,   75,   83,  19.1,  9,  0.84031,  
     &  817,  0.59,  0.58,   75,   83,  19.1,  9,  0.77993,  
     &  818,  0.51,  0.45,  101,   89,  22.0,  9,  0.77351,  
     &  819,  0.59,  0.58,   75,   83,  19.1,  9,  0.84031,  
     &  820,  0.56,  0.50,   83,  121,  16.0,  9,  0.77993,  
     &  821,  0.55,  0.55,   84,   89,  16.0,  9,  0.77351,  
     &  822,  0.57,  0.51,   77,   89,  22.0,  9,  0.72243,  
     &  823,  0.58,  0.54,   74,   90,  16.0,  9,  0.76989,  
     &  824,  0.59,  0.58,   75,   83,  19.1,  9,  0.77993,  
     &  825,  0.60,  0.51,   68,   89,  23.0,  9,  0.76989,  
     &  826,  0.59,  0.58,   75,   83,  19.1,  9,  0.76989,  
     &  827,  0.56,  0.62,   83,   73,  16.0,  9,  0.77993,  
     &  828,  0.59,  0.58,   75,   83,  19.1,  9,  0.77993,  
     &  829,  0.59,  0.58,   75,   83,  19.1, 10,  0.65075,
     &  830,  0.58,  0.60,   77,   90,  22.0,  9,  0.77993,  
     &  831,  0.56,  0.59,   83,   90,  16.0,  9,  0.77993,  
     &  832,  0.57,  0.54,   77,   60,  23.0,  9,  0.72243/  

      DATA (FIASPSG(J, I), I=1,8), J=351,400)/  
     &  833,  0.56,  0.68,   83,   91,  20.0,  9,  0.81068,  
     &  834,  0.59,  0.58,   75,   83,  19.1,  9,  0.81068,  
     &  835,  0.60,  0.51,   71,   89,  22.0,  9,  0.72243,  
     &  836,  0.59,  0.58,   75,   83,  19.1,  9,  0.72243,  
     &  837,  0.56,  0.60,   83,   90,  18.5,  9,  0.77993,  
     &  838,  0.80,  0.51,   52,   89,  16.0,  9,  0.72243,  
     &  839,  0.59,  0.58,   75,   83,  19.1,  9,  0.77351,  
     &  840,  0.59,  0.58,   75,   83,  19.1,  9,  0.72243,  
     &  841,  0.59,  0.58,   75,   83,  19.1,  9,  0.72243,  
     &  842,  0.59,  0.58,   75,   83,  19.1,  9,  0.84031,  
     &  843,  0.59,  0.58,   75,   83,  19.1, 10,  0.65075,  
     &  844,  0.59,  0.58,   75,   83,  19.1,  9,  0.72243,  
     &  845,  0.59,  0.58,   75,   83,  19.1,  9,  0.84031,  
     &  846,  0.59,  0.58,   75,   83,  19.1, 10,  0.65075,  
     &  847,  0.59,  0.58,   75,   83,  19.1, 10,  0.65075,  
     &  851,  0.59,  0.58,   75,   83,  19.1,  9,  0.65075,  
     &  852,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  853,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  854,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  855,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  856,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  857,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  858,  0.52,  0.53,   75,   80,  15.2,  8,  0.93185,  
     &  859,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  860,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  863,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  864,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  865,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  866,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  867,  0.52,  0.53,   75,   80,  15.2, 10,  0.84031,  
     &  868,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  869,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  870,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  873,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  874,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  876,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  877,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  882,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  883,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  884,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  885,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  886,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  887,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  888,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,
     &  890,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  891,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  895,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  896,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  897,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  901,  0.66,  0.29,   41,   88,  15.0,  8,  0.93185/  

      DATA (FIASPSG(J, I), I=1,8), J=401,450)/  
     &  902,  0.66,  0.29,   41,   88,  15.0, 10,  0.65075,  
     &  906,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  907,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  908,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  909,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  911,  0.52,  0.53,   75,   80,  15.2,  8,  0.79248,  
     &  912,  0.52,  0.53,   75,   80,  15.2,  8,  0.79248,  
     &  913,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  914,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  915,  0.52,  0.53,   75,   80,  15.2,  8,  0.79248,  
     &  919,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  920,  0.36,  0.50,  127,   99,  16.0,  6,  0.84031,  
     &  921,  0.36,  0.50,  127,   99,  16.0,  6,  0.84031,  
     &  922,  0.36,  0.50,  127,   99,  16.0,  6,  0.79248,  
     &  923,  0.36,  0.50,  127,   99,  16.0,  6,  0.84031,  
     &  924,  0.36,  0.50,  127,   99,  16.0,  6,  0.79248,  
     &  925,  0.36,  0.50,  127,   99,  16.0,  6,  0.84031,  
     &  926,  0.36,  0.50,  127,   99,  16.0,  6,  0.84031,  
     &  927,  0.36,  0.50,  127,   99,  16.0,  6,  0.79248,  
     &  928,  0.36,  0.50,  127,   99,  16.0,  6,  0.79248,  
     &  929,  0.36,  0.50,  127,   99,  16.0,  6,  0.79248,  
     &  931,  0.42,  0.50,   68,   89,  15.0,  8,  0.79248,  
     &  934,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  935,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  936,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  937,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  940,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  950,  0.32,  0.48,  105,   90,  10.5,  8,  0.67171,  
     &  951,  0.32,  0.48,  105,   90,  10.5,  8,  0.67171,  
     &  952,  0.32,  0.48,  105,   90,  10.5,  8,  0.67171,  
     &  953,  0.32,  0.48,  105,   90,  10.5,  8,  0.67171,  
     &  970,  0.54,  0.43,   66,   91,  14.0,  8,  0.79248,  
     &  971,  0.60,  0.45,   42,   75,  14.0,  8,  0.79248,  
     &  972,  0.46,  0.44,   94,   78,  14.0,  8,  0.79248,  
     &  973,  0.59,  0.45,   66,   75,  14.0,  8,  0.79248,  
     &  974,  0.54,  0.43,   66,   91,  14.0,  8,  0.79248,  
     &  975,  0.48,  0.29,   77,  171,  14.0,  8,  0.79248,  
     &  976,  0.54,  0.43,   66,   91,  14.0,  8,  0.79248,  
     &  977,  0.57,  0.50,   51,   57,  14.0,  8,  0.93185,  
     &  981,  0.51,  0.55,   67,   43,  15.0,  8,  0.96395,  
     &  982,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  986,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  987,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  988,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  989,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,
     &  990,  0.52,  0.53,   75,   80,  15.2, 10,  0.65075,  
     &  991,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  992,  0.52,  0.53,   75,   80,  15.2,  8,  0.79248,  
     &  993,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  994,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031/  

      DATA (FIASPSG(J, I), I=1,8), J=451,455)/  
     &  995,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  996,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  997,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  998,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031,  
     &  999,  0.52,  0.53,   75,   80,  15.2,  8,  0.84031/  
