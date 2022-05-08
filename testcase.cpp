// JDG TODO: create some kind of programattic builder that creates a large number of structs
// to make parsing more representative of a real-world usecase. Consider using Go because
// it's what I'm learning; if not, Python because it's what I know.

typedef struct
{
  char initials[2];
  unsigned int car_number;
  bool has_won_wdc;
} Driver;

typedef struct
{
  Driver drivers[2];
  unsigned short int sponsors[4];
  bool has_won_wdc;
  signed int last_wdc;
  bool has_won_wcc;
  signed int last_wcc;
} Team;

// Define our instances to build our static struct
static const Driver verstappen = {
  {'m', 'v'},
  33,
  false
};

static const Driver perez = {
  {'s', 'p'},
  11,
  false
};

static const Driver hamilton = {
  {'l', 'h'},
  44,
  true
};

static const Driver bottas = {
  {'v', 'b'},
  77,
  false
};

static const Team red_bull = {
  {verstappen, perez},
  {0x00, 0x01, 0x02, 0x03},
  true,
  2013,
  true,
  2013
};

static const Team mercedes = {
  {hamilton, bottas},
  {0x10, 0x11, 0x12, 0x13},
  true,
  2020,
  true,
  2020
};

static const Team formula_1_teams[2] = { red_bull, mercedes };

int main()
{
  // Prevent the compiler from inlining
  return formula_1_teams[0].last_wcc;
}
