from fastapi import FastAPI
app = FastAPI()

@app.get("/items/{id}")
async def num_id(id : str,num:bool = False):
    if num:
        return {"message" : f"{id} is valid"}
    else:
        return {"message" : "invalid"}
    