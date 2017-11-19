#ifndef SCHEDR_STATUS_CODES_H
#define SCHEDR_STATUS_CODES_H

typedef int Status;

// Generic status codes
#define SCHEDR_SUCCESS  0
#define SCHEDR_FAILURE  1

// Errors
#define SCHEDR_ERROR_INVALID_ARGUMENT 2
#define SCHEDR_ERROR_NULL_ARGUMENT 3
#define SCHEDR_ERROR_BUFFER_OVERFLOW 4
#define SCHEDR_ERROR_NOT_IMPLEMENTED 5
#define SCHEDR_ERROR_FILE_NOT_FOUND 6
#define SCHEDR_ERROR_CONFIG_FORMAT 7
#define SCHEDR_ERROR_ALLOCATION_FAILED 8
#define SCHEDR_ERROR_PERMISSION_DENIED 9
#define SCHEDR_ERROR_JOB_COMMAND_NOT_FOUND 10

// Warnings
#define SCHEDR_WARNING_NO_JOBS 11

#endif /* SCHEDR_STATUS_CODES_H */
