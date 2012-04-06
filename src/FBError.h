/*
 * Copyright 2012 Facebook
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

// The error domain of all error codes returned by the Facebook SDK
extern NSString *const FBiOSSDKDomain;

// ----------------------------------------------------------------------------
// Keys in the userInfo NSDictionary of NSError where you can find additional
// information about the error.  All are optional.

// The key for an inner NSError.
extern NSString *const FBErrorInnerErrorKey;

// The key for parsed JSON response from the server.
extern NSString *const FBErrorParsedJSONResponseKey;

// The key for HTTP status code.
extern NSString *const FBErrorHTTPStatusCodeKey;

// ----------------------------------------------------------------------------
// Error codes returned by the Facebook SDK in NSError.  These are
// valid only in the scope of FBiOSSDKDomain.
typedef enum FBErrorCode {
    // Like nil for FBErrorCode values, represents an error code that
    // has not been initialized yet.
    FBErrorInvalid = 0,

    // The operation failed because it was cancelled.
    FBErrorOperationCancelled,
    
    // A login attempt failed
    FBErrorLoginFailedOrCancelled,

    // The graph API returned an error for this operation.
    FBErrorRequestConnectionApi,

    // The operation failed because the server returned an unexpected
    // response.  You can get this error if you are not using the most
    // recent SDK, or if you set your application's migration settings
    // incorrectly for the version of the SDK you are using.
    //
    // If this occurs on the current SDK with proper app migration
    // settings, you may need to try changing to one request per batch.
    FBErrorProtocolMismatch,

    // Non-success HTTP status code was returned from the operation.
    FBErrorHTTPError,

} FBErrorCode;

// The key in the userInfo NSDictionary of NSError where you can find
// the inner NSError (if any).
extern NSString *const FBErrorInnerErrorKey;

// The NSError key used by session to capture login failure reason
extern NSString *const FBErrorLoginFailedReason;

// the NSError key used by session to capture login failure error code
extern NSString *const FBErrorLoginFailedOriginalErrorCode;

// used by session when an inline dialog fails
extern NSString *const FBErrorLoginFailedReasonInlineCancelledValue;
extern NSString *const FBErrorLoginFailedReasonInlineNotCancelledValue;

// Exception strings raised by the Facebook SDK

// This exception is raised by methods in the Facebook SDK to indicate
// that an attempted operation is invalid
extern NSString *const FBInvalidOperationException;

// Facebook SDK also raises exceptions the following common exceptions:
//  NSInvalidArgumentException
