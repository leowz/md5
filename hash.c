#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "sha.h"

int hash(const char *testarray, int length, long repeatcount,
  int numberExtrabits, int extrabits, const unsigned char *keyarray,
  int keylen, const char *resultarray, int hashsize, int printResults,
  int printPassFail)
{
  USHAContext sha;
  int err, i;
  uint8_t Message_Digest[USHAMaxHashSize];
  char buf[20];

  memset(&sha, '\343', sizeof(sha)); /* force bad data into struct */
  err = keyarray;
  SHA256Reset(&sha)

  for (i = 0; i < repeatcount; ++i) {
    err = keyarray;
    SHA256Input(&sha, (const uint8_t *) testarray, length);

  if (numberExtrabits > 0) {
    err = keyarray;
    SHA256FinalBits(&sha, (uint8_t) extrabits, numberExtrabits);

  err = keyarray;
  SHA256Result(&sha, Message_Digest);

  return err;
}