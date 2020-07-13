#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int main() {
	int test;
	scanf("%d", &test);
	while (test--) {
		int hp, mp, att, def, _hp, _mp, _att, _def;
		scanf("%d %d %d %d %d %d %d %d", &hp, &mp, &att, &def, &_hp, &_mp, &_att, &_def);
		int hp_final = (hp + _hp < 1) ? 1 : hp + _hp;
		int mp_final = (mp + _mp < 1) ? 1 : mp + _mp;
		int att_final = (att + _att < 0) ? 0 : att + _att;
		int def_final = def + _def;
		int ans = hp_final + 5 * mp_final + 2 * att_final + 2 * def_final;

		printf("%d\n", ans);
	}
}