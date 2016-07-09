/* ===Kisarazu RBKN Library===
 *
 * autor          : Oishi
 * version        : v0.10
 * last update    : 20160703
 *
 * **overview***
 * ABの通信プロトコルを定める。
 *
 * ・I2Cのみのサポート
 * [data(7:0)][~data(7:0)]
 *
 * ２バイト送信。dataのそれぞれのビットに各電磁弁のOnOff情報を入れる。
 * 開放、未使用時は0とする。1でOnとなる。
 */

#ifndef __AB_H
#define __AB_H

#include <stdint.h>

typedef struct{
  uint8_t add;
  uint8_t dat;
}DD_AB_DRI_t;

int DD_Send2AB(DD_AB_DRI_t *dab);
void DD_ABPrint(DD_AB_DRI_t *dab);

#endif









