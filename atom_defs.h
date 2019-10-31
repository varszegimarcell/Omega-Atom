#ifndef APPS_ATOM_DEFS_H
#define APPS_ATOM_DEFS_H

#define ATOM_NUMS 118

enum AtomType {
  ALKALI_METAL,
  ALKALI_EARTH_METAL,
  LANTHANIDE,
  ACTINIDE,
  TRANSITION_METAL,
  POST_TRANSITION_METAL,
  METALLOID,
  HALOGEN,
  REACTIVE_NONMETAL,
  NOBLE_GAS,
  UNKNOWN
};

struct AtomDef {
  uint8_t num;
  uint8_t x;
  uint8_t y;
  AtomType type;
  const char* name;
  const char* symbol;
  uint8_t neutrons;
  double mass;
  double electroneg;
};

const AtomDef atomsdefs[ATOM_NUMS] = {
  {  1,  0,  0, REACTIVE_NONMETAL       , "Hydrogen"     , "H"   ,   0, 1.00794     , 2.2   },
  {  2, 17,  0, NOBLE_GAS               , "Helium"       , "He"  ,   2, 4.002602    , -1    },
  
  
  {  3,  0,  1, ALKALI_METAL            , "Lithium"      , "Li"  ,   4, 6.941       , 0.98  },
  {  4,  1,  1, ALKALI_EARTH_METAL      , "Beryllium"    , "Be"  ,   5, 9.0121831   , 1.57  },
  {  5, 12,  1, METALLOID               , "Boron"        , "B"   ,   6, 10.81       , 2.04  },
  {  6, 13,  1, REACTIVE_NONMETAL       , "Carbon"       , "C"   ,   6, 12.01074    , 2.55  },
  {  7, 14,  1, REACTIVE_NONMETAL       , "Nitrogen"     , "N"   ,   7, 14.0067     , 3.04  },
  {  8, 15,  1, REACTIVE_NONMETAL       , "Oxygen"       , "O"   ,   8, 15.9994     , 3.44  },
  {  9, 16,  1, HALOGEN                 , "Fluorine"     , "F"   ,  10, 18.998403163, 3.98  },
  { 10, 17,  1, NOBLE_GAS               , "Neon"         , "Ne"  ,  10, 20.1797     , -1    },
  
  
  { 11,  0,  2, ALKALI_METAL            , "Sodium"       , "Na"  ,  12, 22.98976928 , 0.93  },
  { 12,  1,  2, ALKALI_EARTH_METAL      , "Magnesium"    , "Mg"  ,  12, 24.3050     , 1.31  },
  { 13, 12,  2, POST_TRANSITION_METAL   , "Aluminium"    , "Al"  ,  14, 26.9815386  , 1.61  },
  { 14, 13,  2, METALLOID               , "Silicon"      , "Si"  ,  14, 28.0855     , 1.90  },
  { 15, 14,  2, REACTIVE_NONMETAL       , "Phosphorus"   , "P"   ,  16, 30.973761998, 2.19  },
  { 16, 15,  2, REACTIVE_NONMETAL       , "Sulfur"       , "S"   ,  16, 32.065      , 2.58  },
  { 17, 16,  2, HALOGEN                 , "Chlorine"     , "Cl"  ,  18, 35.453      , 3.16  },
  { 18, 17,  2, NOBLE_GAS               , "Argon"        , "Ar"  ,  22, 39.948      , -1    },
  
  
  { 19,  0,  3, ALKALI_METAL            , "Potassium"    , "K"   ,  20, 39.0983     , 0.82  },
  { 20,  1,  3, ALKALI_EARTH_METAL      , "Calcium"      , "Ca"  ,  20, 40.078      , 1     },
  { 21,  2,  3, TRANSITION_METAL        , "Scandium"     , "Sc"  ,  24, 44.955908   , 1.36  },
  { 22,  3,  3, TRANSITION_METAL        , "Titanium"     , "Ti"  ,  26, 47.867      , 1.54  },
  { 23,  4,  3, TRANSITION_METAL        , "Vanadium"     , "V"   ,  28, 50.9415     , 1.63  },
  { 24,  5,  3, TRANSITION_METAL        , "Chromium"     , "Cr"  ,  28, 51.9961     , 1.66  },
  { 25,  6,  3, TRANSITION_METAL        , "Manganese"    , "Mn"  ,  30, 54.938044   , 1.55  },
  { 26,  7,  3, TRANSITION_METAL        , "Iron"         , "Fe"  ,  30, 55.845      , 1.83  },
  { 27,  8,  3, TRANSITION_METAL        , "Cobalt"       , "Co"  ,  32, 58.933194   , 1.88  },
  { 28,  9,  3, TRANSITION_METAL        , "Nickel"       , "Ni"  ,  31, 58.6934     , 1.91  },
  { 29, 10,  3, TRANSITION_METAL        , "Copper"       , "Cu"  ,  35, 63.546      , 1.9   },
  { 30, 11,  3, POST_TRANSITION_METAL   , "Zinc"         , "Zn"  ,  35, 65.409      , 1.65  },
  { 31, 12,  3, POST_TRANSITION_METAL   , "Gallium"      , "Ga"  ,  39, 69.723      , 1.81  },
  { 32, 13,  3, METALLOID               , "Germanium"    , "Ge"  ,  41, 72.64       , 2.01  },
  { 33, 14,  3, METALLOID               , "Arsenic"      , "As"  ,  42, 74.921595   , 2.18  },
  { 34, 15,  3, REACTIVE_NONMETAL       , "Selenium"     , "Se"  ,  45, 78.971      , 2.48  },
  { 35, 16,  3, HALOGEN                 , "Bromine"      , "Br"  ,  45, 79.904      , 2.96  },
  { 36, 17,  3, NOBLE_GAS               , "Krypton"      , "Kr"  ,  48, 83.798      , 3.00  },
  
  { 37,  0,  4, ALKALI_METAL            , "Rubidium"     , "Rb"  ,  20, 85.4678     , 0.82  },
  { 38,  1,  4, ALKALI_EARTH_METAL      , "Strontium"    , "Sr"  ,  20, 87.62       , 0.95  },
  { 39,  2,  4, TRANSITION_METAL        , "Yttrium"      , "Y"   ,  24, 88.90584    , 1.22  },
  { 40,  3,  4, TRANSITION_METAL        , "Zirconium"    , "Zr"  ,  26, 91.224      , 1.33  },
  { 41,  4,  4, TRANSITION_METAL        , "Niobium"      , "Nb"  ,  28, 92.90637    , 1.6   },
  { 42,  5,  4, TRANSITION_METAL        , "Molybdenum"   , "Mo"  ,  28, 95.95       , 2.16  },
  { 43,  6,  4, TRANSITION_METAL        , "Technetium"   , "Tc"  ,  30, 98          , 1.9   },
  { 44,  7,  4, TRANSITION_METAL        , "Ruthemium"    , "Ru"  ,  30, 101.07      , 2.2   },
  { 45,  8,  4, TRANSITION_METAL        , "Rhodium"      , "Rh"  ,  32, 102.90550   , 2.28  },
  { 46,  9,  4, TRANSITION_METAL        , "Palladium"    , "Pd"  ,  31, 106.42      , 2.20  },
  { 47, 10,  4, TRANSITION_METAL        , "Silver"       , "Ag"  ,  35, 107.8682    , 1.93  },
  { 48, 11,  4, POST_TRANSITION_METAL   , "Cadmium"      , "Cd"  ,  35, 112.414     , 1.69  },
  { 49, 12,  4, POST_TRANSITION_METAL   , "Indium"       , "In"  ,  39, 114.818     , 1.78  },
  { 50, 13,  4, POST_TRANSITION_METAL   , "Tin"          , "Sn"  ,  41, 118.710     , 1.96  },
  { 51, 14,  4, METALLOID               , "Antimony"     , "Sb"  ,  42, 121.760     , 2.05  },
  { 52, 15,  4, METALLOID               , "Tellurium"    , "Te"  ,  45, 127.60      , 2.1   },
  { 53, 16,  4, HALOGEN                 , "Indine"       , "I"   ,  45, 126.90447   , 2.66  },
  { 54, 17,  4, NOBLE_GAS               , "Xenon"        , "Xe"  ,  48, 131.293     , 2.60  },
  
  
  { 55,  0,  5, ALKALI_METAL            , "Caesium"      , "Cs"  ,  78, 132.90545196, 0.79  },
  { 56,  1,  5, ALKALI_EARTH_METAL      , "Barium"       , "Ba"  ,  81, 137.327     , 0.89  },

  { 57,  3,  7, LANTHANIDE              , "Lanthanum"    , "La"  ,  82, 138.90547   , 1.10  },
  { 58,  4,  7, LANTHANIDE              , "Cerium"       , "Ce"  ,  82, 140.116     , 1.12  },
  { 59,  5,  7, LANTHANIDE              , "Praseodymium" , "Pr"  ,  82, 140.90766   , 1.13  },
  { 60,  6,  7, LANTHANIDE              , "Neodymium"    , "Nd"  ,  84, 144.242     , 1.14  },
  { 61,  7,  7, LANTHANIDE              , "Promethium"   , "Pm"  ,  84, 145         , 1.13  },
  { 62,  8,  7, LANTHANIDE              , "Samarium"     , "Sm"  ,  88, 150.36      , 1.17  },
  { 63,  9,  7, LANTHANIDE              , "Europium"     , "Eu"  ,  89, 151.964     , 1.12  },
  { 64, 10,  7, LANTHANIDE              , "Gadolinium"   , "Gd"  ,  93, 157.25      , 1.20  },
  { 65, 11,  7, LANTHANIDE              , "Terbium"      , "Tb"  ,  94, 158.92534   , 1.20  },
  { 66, 12,  7, LANTHANIDE              , "Dyxprosium"   , "Dy"  ,  97, 162.500     , 1.22  },
  { 67, 13,  7, LANTHANIDE              , "Holmium"      , "Ho"  ,  98, 164.93033   , 1.23  },
  { 68, 14,  7, LANTHANIDE              , "Erbium"       , "Er"  ,  99, 167.259     , 1.24  },
  { 69, 15,  7, LANTHANIDE              , "Thulium"      , "Tm"  , 100, 168.93422   , 1.25  },
  { 70, 16,  7, LANTHANIDE              , "Ytterbium"    , "Yb"  , 103, 173.04      , 1.1   },
  { 71, 17,  7, LANTHANIDE              , "Lutetium"     , "Lu"  , 104, 174.9668    , 1.27  },

  { 72,  3,  5, TRANSITION_METAL        , "Hafnium"      , "Hf"  , 106, 178.49      , 1.3   },
  { 73,  4,  5, TRANSITION_METAL        , "Tantalum"     , "Ta"  , 108, 180.94788   , 1.5   },
  { 74,  5,  5, TRANSITION_METAL        , "Tungsten"     , "W"   , 110, 183.84      , 2.36  },
  { 75,  6,  5, TRANSITION_METAL        , "Rhenium"      , "Re"  , 111, 186.207     , 1.9   },
  { 76,  7,  5, TRANSITION_METAL        , "Osmium"       , "Os"  , 114, 190.23      , 2.2   },
  { 77,  8,  5, TRANSITION_METAL        , "Iridium"      , "Ir"  , 115, 192.217     , 2.2   },
  { 78,  9,  5, TRANSITION_METAL        , "Platinum"     , "Pt"  , 117, 195.084     , 2.28  },
  { 79, 10,  5, TRANSITION_METAL        , "Gold"         , "Au"  , 118, 196.966569  , 2.54  },
  { 80, 11,  5, POST_TRANSITION_METAL   , "Mercury"      , "Hg"  , 121, 200.59      , 2     },
  { 81, 12,  5, POST_TRANSITION_METAL   , "Thalium"      , "Tl"  , 123, 204.3833    , 1.62  },
  { 82, 13,  5, POST_TRANSITION_METAL   , "Lead"         , "Pb"  , 125, 207.2       , 2.33  },
  { 83, 14,  5, POST_TRANSITION_METAL   , "Bismuth"      , "Bi"  , 126, 208.98040   , 2.02  },
  { 84, 15,  5, POST_TRANSITION_METAL   , "Polonium"     , "Po"  , 125, 209         , 2.0   },
  { 85, 16,  5, HALOGEN                 , "Astatine"     , "At"  , 125, 210         , 2.2   },
  { 86, 17,  5, NOBLE_GAS               , "Radon"        , "Rn"  , 136, 222         , 2.1   },
  
  
  { 87,  0,  6, ALKALI_METAL            , "Francium"     , "Fr"  , 136, 223         , 0.7   },
  { 88,  1,  6, ALKALI_EARTH_METAL      , "Radium"       , "Ra"  , 138, 226.0254    , 0.9   },

  { 89,  3,  8, ACTINIDE                , "Actinium"     , "Ac"  , 138, 227         , 1.1   },
  { 90,  4,  8, ACTINIDE                , "Thorium"      , "Th"  , 142, 232.0377    , 1.3   },
  { 91,  5,  8, ACTINIDE                , "Protactinium" , "Pa"  , 140, 231.03588   , 1.5   },
  { 92,  6,  8, ACTINIDE                , "Uranium"      , "U"   , 146, 238.02891   , 1.7   },
  { 93,  7,  8, ACTINIDE                , "Neptunium"    , "Np"  , 144, 237         , 1.36  },
  { 94,  8,  8, ACTINIDE                , "Plutonium"    , "Pu"  , 150, 244.06      , 1.28  },
  { 95,  9,  8, ACTINIDE                , "Americium"    , "Am"  , 148, 241.06      , -1    },
  { 96, 10,  8, ACTINIDE                , "Curium"       , "Cm"  , 151, 247         , 1.3   },
  { 97, 11,  8, ACTINIDE                , "Berkellum"    , "Bk"  , 150, 247         , 1.3   },
  { 98, 12,  8, ACTINIDE                , "Californium"  , "Cf"  , 153, 251         , 1.3   },
  { 99, 13,  8, ACTINIDE                , "Einsteinium"  , "Es"  , 153, 252         , 1.3   },
  {100, 14,  8, ACTINIDE                , "Fermium"      , "Fm"  , 157, 257         , -1    },
  {101, 15,  8, ACTINIDE                , "Mendelevium"  , "Md"  , 157, 258         , 1.3   },
  {102, 16,  8, ACTINIDE                , "Nobelium"     , "No"  , 157, 259         , -1    },
  {103, 17,  8, ACTINIDE                , "Lawrencium"   , "Lr"  , 159, 266         , 1.3   },

  {104,  3,  6, TRANSITION_METAL        , "Rutherfordium", "Rf"  , 157, 267         , -1    },
  {105,  4,  6, TRANSITION_METAL        , "Dubnium"      , "Db"  , 157, 268         , -1    },
  {106,  5,  6, TRANSITION_METAL        , "Seaborgium"   , "Sg"  , 157, 269         , -1    },
  {107,  6,  6, TRANSITION_METAL        , "Bohrium"      , "Bh"  , 157, 270         , -1    },
  {108,  7,  6, TRANSITION_METAL        , "Hassium"      , "Hs"  , 157, 277         , -1    },
  {109,  8,  6, UNKNOWN                 , "Meitnerium"   , "Mt"  , 159, 278         , -1    },
  {110,  9,  6, UNKNOWN                 , "Damstadtium"  , "Ds"  , 171, 281         , -1    },
  {111, 10,  6, UNKNOWN                 , "Roentgenium"  , "Rg"  , 162, 282         , -1    },
  {112, 11,  6, POST_TRANSITION_METAL   , "Coppernicium" , "Cn"  , 165, 285         , -1    },
  {113, 12,  6, UNKNOWN                 , "Nihonium"     , "Nh"  , 170, 286         , -1    },
  {114, 13,  6, UNKNOWN                 , "Flerovium"    , "Fl"  , 171, 289         , -1    },
  {115, 14,  6, UNKNOWN                 , "Moscovium"    , "Mv"  , 172, 289         , -1    },
  {116, 15,  6, UNKNOWN                 , "Livermorium"  , "Lv"  , 173, 293         , -1    },
  {117, 16,  6, UNKNOWN                 , "Tennessine"   , "Ts"  , 177, 294         , -1    },
  {118, 17,  6, NOBLE_GAS               , "Oganesson"    , "Og"  , 175, 294         , -1    },
  
  
};

#endif
